import rclpy
from rclpy.node import Node

def main(args=None):
    rclpy.init(args=args)
    node = Node("second_ros2_node")
    node.get_logger().info("Hello ROS2")
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
