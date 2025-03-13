import rclpy
from rclpy.node import Node
import requests
from example_interfaces.msg import String
from queue import Queue

class NovelPubNode(Node):
    def __init__(self,node_name:str):
        super().__init__(node_name)
        self.novels_queue_ = Queue() # 创建一个队列，用于存放小说的章节
        self.novel_publisher_ = self.create_publisher(String, "novel", 10)
        self.timer_ = self.create_timer(1.0, self.timer_callback)
        self.get_logger().info("Novel Publisher has been started.")

    def download_novel(self,url):
        response = requests.get(url)
        response.encoding = 'utf-8'
        self.get_logger().info(f"下载小说章节完成：{url}")
        for line in response.text.splitlines():
            self.novels_queue_.put(line)

    def timer_callback(self):
        if self.novels_queue_.qsize() > 0:
           msg = String()
           msg.data = self.novels_queue_.get()
           self.novel_publisher_.publish(msg)
           self.get_logger().info(f"Publishing: {msg.data}")


def main():
    rclpy.init()
    node = NovelPubNode("novel_pub")
    node.download_novel("http://localhost:8000/novel1.txt")
    rclpy.spin(node)
    rclpy.shutdown()
