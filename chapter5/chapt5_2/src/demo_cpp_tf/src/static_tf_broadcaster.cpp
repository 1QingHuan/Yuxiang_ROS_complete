#include <memory>
#include "geometry_msgs/msg/transform_stamped.hpp"
#include "rclcpp/rclcpp.hpp"
#include "tf2/LinearMath/Quaternion.h"             // 使用 tf2::Quaternion 类
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp" // 提供消息类型转换函数
#include "tf2_ros/static_transform_broadcaster.h"  // 提供静态坐标变换广播类

class StaticTFBroadcaster : public rclcpp::Node
{
public:
    StaticTFBroadcaster() : Node("tf_broadcaster_node")
    {
        // 创建静态广播并发布
        broadcaster_ = std::make_shared<tf2_ros::StaticTransformBroadcaster>(this);
        this->publish_tf();
    }

    void publish_tf()
    {
        geometry_msgs::msg::TransformStamped transform;
        transform.header.stamp = this->get_clock()->now();
        transform.header.frame_id = "map";
        transform.child_frame_id = "target_point";
        transform.transform.translation.x = 5.0;
        transform.transform.translation.y = 3.0;
        transform.transform.translation.z = 0.0;

        tf2::Quaternion quat;
        quat.setRPY(0, 0, 60 * M_PI / 180);              // 欧拉角转换为四元数
        transform.transform.rotation = tf2::toMsg(quat); // 转换消息类型

        broadcaster_->sendTransform(transform);
    }

private:
    std::shared_ptr<tf2_ros::StaticTransformBroadcaster> broadcaster_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<StaticTFBroadcaster>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
