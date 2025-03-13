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
            
