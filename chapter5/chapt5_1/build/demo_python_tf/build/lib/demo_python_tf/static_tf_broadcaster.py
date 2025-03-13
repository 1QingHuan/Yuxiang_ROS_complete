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
