import threading
import requests

class Downloads:
    def download(self,url,callback):
        print(f"线程{threading.get_ident()}开始下载{url}")
        response = requests.get(url)
        response.encoding = 'utf-8'
        callback(url,response.text)

    def start_download(self,url,callback):
        thread = threading.Thread(target=self.download,args=(url,callback))
        thread.start()
    
def download_finish_callback(url,result):
    print(f"线程{threading.get_ident()}下载完成,{url}下载完成，共下载了{len(result)}个字符，内容为：{result}")

def main():
    download = Downloads()
    download.start_download("http://localhost:8000/novel1.txt",download_finish_callback)
    download.start_download("http://localhost:8000/novel2.txt",download_finish_callback)
    download.start_download("http://localhost:8000/novel3.txt",download_finish_callback)
