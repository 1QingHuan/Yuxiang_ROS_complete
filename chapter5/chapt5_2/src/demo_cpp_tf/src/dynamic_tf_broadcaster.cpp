#include <memory>
#include "geometry_msgs/msg/transform_stamped.hpp" // 坐标转换消息
#include "rclcpp/rclcpp.hpp"
#include "tf2/LinearMath/Quaternion.h"             // 使用 tf2::Quaternion 类
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp" // 提供坐标转换消息类型转换
#include "tf2_ros/transform_broadcaster.h"         // 监听并广播坐标变换
#include <chrono>                                  // 用于时间操作

using namespace std;
using namespace std::chrono_literals;

class DynamicTFBroadcaster : public rclcpp::Node
{
public:
    DynamicTFBroadcaster() : Node("dynamic_tf_broadcaster")
    {
        tf_broadcaster_ = std::make_shared<tf2_ros::TransformBroadcaster>(this);
        timer_ = create_wall_timer(10ms, std::bind(&DynamicTFBroadcaster::publishTransform, this));
    }

    void publishTransform()
    {
        geometry_msgs::msg::TransformStamped transform;
        transform.header.stamp = this->get_clock()->now();
        transform.header.frame_id = "map";
        transform.child_frame_id = "base_link";
        transform.transform.translation.x = 2.0;
        transform.transform.translation.y = 3.0;
        transform.transform.translation.z = 0.0;

        tf2::Quaternion quat;
        quat.setRPY(0, 0, 30 * M_PI / 180);              // 欧拉角转换为四元数
        transform.transform.rotation = tf2::toMsg(quat); // 转换消息格式

        tf_broadcaster_->sendTransform(transform);
    }

private:
    std::shared_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<DynamicTFBroadcaster>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
