'''
TFListener（变换监听器）：
作用：监听并查询 camera_link 到 bottle_link 的变换。
特点：使用 TransformListener 和 Buffer 从 TF 树中获取变换数据，并通过定时器（每 0.01 秒）定期检查。它将四元数转换为欧拉角以便更容易理解。
监听内容：
查询 camera_link 到 bottle_link 的变换（直接依赖 DynamicTFBroadcaster 的发布）。
输出平移、欧拉角旋转和四元数。
用途：验证和展示系统中发布的变换是否正确。
'''

import rclpy
from rclpy.node import Node
from tf2_ros import TransformListener,Buffer
from tf_transformations import euler_from_quaternion

class TFListener(Node):
    def __init__(self):
        super().__init__('tf_listener')
        self.buffer = Buffer()
        self.listener = TransformListener(self.buffer,self)
        self.timer = self.create_timer(0.01, self.tf_callback)

    def tf_callback(self):
        try:
            result = self.buffer.lookup_transform('camera_link', 'bottle_link', 
            rclpy.time.Time(),rclpy.time.Duration(seconds=1.0))
            transform = result.transform
            rotation_euler = euler_from_quaternion([
                transform.rotation.x, 
                transform.rotation.y,
                transform.rotation.z,
                transform.rotation.w])
            self.get_logger().info(f"平移:{transform.translation}, 旋转:{rotation_euler},旋转四元数:{transform.rotation}")
        except Exception as e:
            self.get_logger().error(f"Failed to get transform: {str(e)}")
        
def main(args=None):   
    rclpy.init(args=args)
    node = TFListener()
    rclpy.spin(node)
    rclpy.shutdown()
            
