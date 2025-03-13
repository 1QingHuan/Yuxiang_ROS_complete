import rclpy
from rclpy.node import Node
from example_interfaces.msg import String
import threading
from queue import Queue
import espeakng

class NovelSubNode(Node):
    def __init__(self, node_name: str):
        super().__init__(node_name)
        self.novels_queue_ = Queue()  # 创建一个队列，用于存放小说的章节
        self.novel_subscriber_ = self.create_subscription(String, "novel", self.novel_callback, 10)
        
        self.speaker = espeakng.Speaker()
        self.speaker.voice = "zh"  # 设置中文朗读
        
        self.speech_thread = threading.Thread(target=self.speak_novel, daemon=True)
        self.speech_thread.start()
    
    def novel_callback(self, msg):
        self.novels_queue_.put(msg.data)  # 将接收到的文本加入队列

    def speak_novel(self):
        while rclpy.ok():
            novel = self.novels_queue_.get()  # 阻塞等待新消息
            self.get_logger().info(f"Speak: {novel}")
            self.speaker.say(novel, sync=True)  # 使用同步模式，确保朗读完再处理下一个

def main():
    rclpy.init()
    node = NovelSubNode("novel_read")
    rclpy.spin(node)
    rclpy.shutdown()

