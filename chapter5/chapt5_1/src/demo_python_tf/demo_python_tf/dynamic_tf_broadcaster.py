'''
DynamicTFBroadcaster（动态变换广播器）：
作用：发布一个动态变换，从 camera_link 到 bottle_link。
特点：动态变换通过定时器（每 0.01 秒）持续发布，适用于随时间变化的坐标系关系（例如，相机和移动物体之间的关系）。它使用 TransformBroadcaster。
发布内容：
平移：(0.2, 0.0, 0.5)（x 轴 0.2 米，z 轴 0.5 米）。
旋转：无旋转（quaternion_from_euler(0, 0, 0) 表示单位四元数）。
用途：模拟一个动态物体（例如瓶子）相对于相机的位置。
'''

import math
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import TransformStamped
from tf2_ros import TransformBroadcaster
from tf_transformations import quaternion_from_euler

class DynamicTFBroadcaster(Node):
    def __init__(self):
        super().__init__('dynamic_tf_broadcaster')

        self.get_logger().info("Initializing Dynamic TF Broadcaster...")

        # 使用 TransformBroadcaster
        self.broadcaster = TransformBroadcaster(self)

        self.time_ =self.create_timer(0.01,self.publish_transform)


    def publish_transform(self):
        transform = TransformStamped()
        transform.header.stamp = self.get_clock().now().to_msg()
        transform.header.frame_id = 'camera_link'
        transform.child_frame_id = 'bottle_link'
        transform.transform.translation.x = 0.2
        transform.transform.translation.y = 0.0
        transform.transform.translation.z = 0.5
        rotation = quaternion_from_euler(0, 0, 0)
        transform.transform.rotation.x = rotation[0]
        transform.transform.rotation.y = rotation[1]
        transform.transform.rotation.z = rotation[2]
        transform.transform.rotation.w = rotation[3]
        self.broadcaster.sendTransform(transform)
        self.get_logger().info("Dynamic TF published.")

def main(args=None):
    rclpy.init(args=args)
    node = DynamicTFBroadcaster()
    rclpy.spin(node)  # 让节点持续运行
    rclpy.shutdown()
