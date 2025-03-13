#include <QApplication>
#include <QLabel>
#include <QString>

// ROS 2
#include <rclcpp/rclcpp.hpp>
#include <status_interfaces/msg/system_status.hpp>

// C++ 标准库
#include <sstream>
#include <thread>
#include <memory>

using SystemStatus = status_interfaces::msg::SystemStatus;

class SysStatusDisplay : public rclcpp::Node
{
public:
    SysStatusDisplay()
        : Node("sys_status_display")
    {
        // 先创建QLabel控件
        label_ = new QLabel("等待接收SystemStatus消息...");

        // 创建订阅者
        sub_ = this->create_subscription<SystemStatus>(
            "sys_status", 10,
            [this](const SystemStatus::SharedPtr msg)
            {
                label_->setText(get_qstr_from_msg(msg));
            });

        label_->show();
    }

private:
    /**
     * 将 SystemStatus 消息中的信息格式化后，转换为 QString
     */
    QString get_qstr_from_msg(const SystemStatus::SharedPtr msg)
    {
        std::stringstream show_str;
        show_str
            << "================系统可视化显示工具================" << std::endl
            << "数据时间戳：" << msg->stamp.sec << " s" << std::endl
            << "用户名：" << msg->host_name << std::endl
            << "CPU使用率：" << msg->cpu_percent << " %" << std::endl
            << "内存使用率：" << msg->memory_percent << " %" << std::endl
            << "内存总大小：" << msg->memory_total << " MB" << std::endl
            << "剩余内存大小：" << msg->memory_available << " MB" << std::endl
            << "网络发送量：" << msg->net_sent << " MB" << std::endl
            << "网络接收量：" << msg->net_recv << " MB" << std::endl
            << "===================================================" << std::endl;
        return QString::fromStdString(show_str.str());
    }

    rclcpp::Subscription<SystemStatus>::SharedPtr sub_;
    QLabel *label_;
}; // <-- 注意这里的分号

/**
 * Qt 应用程序主函数
 */
int main(int argc, char *argv[])
{
    // 初始化 Qt
    QApplication app(argc, argv);

    // 初始化 ROS
    rclcpp::init(argc, argv);
    auto node = std::make_shared<SysStatusDisplay>();

    // 启动一个线程来 spin ROS 回调
    std::thread spin_thread([node]()
                            { rclcpp::spin(node); });
    spin_thread.detach(); // 或者直接 spin_thread.join()

    // 进入 Qt 事件循环
    app.exec();

    // 退出时关闭 ROS
    rclcpp::shutdown();
    return 0;
}
