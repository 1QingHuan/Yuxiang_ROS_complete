from demo_python_pkg.person_node import PersonNode
import rclpy
from rclpy.node import Node

class WriteNode(PersonNode):
    def __init__(self,name:str,age:int,book:str):
        super().__init__("write_node",name, age)
        self.get_logger().info("Hello ROS2, I am WriteNode")
        self.book = book
        
    def read(self):
        self.get_logger().info(f"我叫{self.name}，今年{self.age}岁，我正在读{self.book}")

def main():
    rclpy.init()
    node = WriteNode('张三', 18, "张三自传")
    node.read()
    node.eat("apple")
    rclpy.spin_once(node, timeout_sec=1)
    node.destroy_node()
    rclpy.shutdown()
