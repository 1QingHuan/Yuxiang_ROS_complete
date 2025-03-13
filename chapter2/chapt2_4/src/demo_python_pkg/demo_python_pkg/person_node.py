import rclpy
from rclpy.node import Node

class PersonNode(Node):
    def __init__(self, node_name,name, age):
        # 子类 WriteNode 不能再传入额外的节点名称参数。你应直接调用父类构造函数，并传入人的名字和年龄
        # super().__init__("person_node")  
        super().__init__(node_name)
        self.get_logger().info(f"PersonNode的__init__方法被调用, name: {name}, age: {age}")
        self.name = name
        self.age = age

    def __str__(self):
        return f"Name: {self.name}, Age: {self.age}"

    def eat(self,food_name:str): # 指定food_name的类型为str
        print(f"我叫{self.name}，今年{self.age}岁，我现在正在吃{food_name}")

def main():
    rclpy.init()
    person = PersonNode("Person_node","Tom", 18)
    print(person)
    person.eat("apple")
    rclpy.spin_once(node, timeout_sec=1)
    node.destroy_node()
    rclpy.shutdown()
