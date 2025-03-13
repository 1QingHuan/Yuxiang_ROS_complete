import rclpy
from rclpy.node import Node

def main():
    rclpy.init()
    node = Node("python_node222")
    node.get_logger().info("Hello ROS2,gty")
    rclpy.spin(node)
    rclpy.shutdown()

# 这里面去掉了调用的函数，通过setup.py文件来调用
