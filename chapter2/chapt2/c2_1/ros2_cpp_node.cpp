#include"rclcpp/rclcpp.hpp"

int main(int argc,char **argv){
    rclcpp::init(argc,argv);
    auto node = rclcpp::Node::make_shared("ros2_cpp_node");
    RCLCPP_INFO(node->get_logger(),"Hello ROS2,你好node！");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
