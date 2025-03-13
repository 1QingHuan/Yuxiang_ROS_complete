#include<iostream>
#include <string>
#include<chrono>
#include<functional>
#include<cpp-httplib/httplib.h>

using namespace std;

class Download{
private:
    string url;
    string file_name;
public:
    void download(const string &host,const string &path,
        const function<void(const string &,const string &)> &callback)
    {
        httplib::Client cli(host.c_str());
        auto res = cli.Get(path.c_str());
        if(res && res->status == 200){
            callback(path,res->body);
        }
    }

    void start_download(const string &host,const string &path,
        const function<void(const string &,const string &)> &callback)
    {
        auto download_func = bind(&Download::download,this,placeholders::_1,placeholders::_2,placeholders::_3);
        thread download_thread(download_func,host,path,callback);
        download_thread.detach();
    }
};

int main(){
    Download download;
    auto download_finish_callback = [](const string &path,const string &result) -> void
    {
        cout<<"下载完成，文件路径："<<path<<"，文件大小："<<result.size()<<endl;
    };

    download.start_download("http://localhost:8000","/novel1.txt",download_finish_callback);
    download.start_download("http://localhost:8000", "/novel2.txt", download_finish_callback);
    download.start_download("http://localhost:8000", "/novel3.txt", download_finish_callback);
    this_thread::sleep_for(chrono::milliseconds(1000*10));
    return 0;
}
