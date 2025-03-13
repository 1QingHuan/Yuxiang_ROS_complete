'''
这三个文件共同构建了一个 TF（Transform）系统，用于在 ROS 2 中描述和处理坐标系之间的空间关系。它们的功能和关系如下：

StaticTFBroadcaster（静态变换广播器）：
作用：发布一个静态的变换，从 base_link 到 camera_link。
特点：静态变换只发布一次，不会随时间变化。它使用 StaticTransformBroadcaster，适用于固定的坐标系关系（例如，机器人基座和相机之间的固定位置）。
发布内容：
平移：(0.0, 0.0, 0.0)（无平移）。
旋转：绕 x 轴旋转 180 度（通过 quaternion_from_euler(math.radians(180), 0, 0) 转换为四元数）。
用途：为系统中其他节点提供 base_link 到 camera_link 的参考变换。
'''

import math
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import TransformStamped
from tf2_ros.static_transform_broadcaster import StaticTransformBroadcaster
from tf_transformations import quaternion_from_euler

class StaticTFBroadcaster(Node):
    def __init__(self):
        super().__init__('static_tf_broadcaster')

        self.get_logger().info("Initializing Static TF Broadcaster...")

        # 使用 StaticTransformBroadcaster
        self.static_broadcaster = StaticTransformBroadcaster(self)

        # 发布静态 TF 变换
        self.publish_static_tf()

    def publish_static_tf(self):
        self.get_logger().info("Publishing Static TF...")

        transform = TransformStamped()
        transform.header.stamp = self.get_clock().now().to_msg()
        transform.header.frame_id = 'base_link'
        transform.child_frame_id = 'camera_link'
        transform.transform.translation.x = 0.0
        transform.transform.translation.y = 0.0
        transform.transform.translation.z = 0.0

        # 旋转角度转换成四元数
        rotation = quaternion_from_euler(math.radians(180), 0, 0)
        transform.transform.rotation.x = rotation[0]
        transform.transform.rotation.y = rotation[1]
        transform.transform.rotation.z = rotation[2]
        transform.transform.rotation.w = rotation[3]

        self.get_logger().info("Sending TF transform...")
        self.static_broadcaster.sendTransform(transform)
        self.get_logger().info("Static TF published.")

def main(args=None):
    rclpy.init(args=args)
    node = StaticTFBroadcaster()
    rclpy.spin(node)  # 让节点持续运行
    rclpy.shutdown()
