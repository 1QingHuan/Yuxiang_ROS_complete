import rclpy
from rclpy.node import Node
from chapt4_interfaces.srv import FaceDetect
from ament_index_python.packages import get_package_share_directory
from cv_bridge import CvBridge
import cv2
import time
from sensor_msgs.msg import Image

class FaceDetectClient(Node):
    def __init__(self):
        super().__init__('face_detect_client_node')
        self.client = self.create_client(FaceDetect, '/face_detect')
        self.bridge = CvBridge()
        self.default_image_path = get_package_share_directory('demo_python_service') + "/resource/images.jpeg"
        self.image = cv2.imread(self.default_image_path)

    def send_request(self):
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        request = FaceDetect.Request()
        request.image = self.bridge.cv2_to_imgmsg(self.image, encoding='bgr8')
        future = self.client.call_async(request)
        rclpy.spin_until_future_complete(self, future)
        response = future.result()
        self.get_logger().info(f"Number of faces detected: {response.number}, Time used: {response.use_time}")
        self.show_face_location(response)


    def show_face_location(self, response):
        # 遍历所有检测到的人脸（假设 response.top, response.right, response.bottom, response.left 都是列表）
        for i in range(len(response.top)):
            top = response.top[i]
            right = response.right[i]
            bottom = response.bottom[i]
            left = response.left[i]
            cv2.rectangle(self.image, (left, top), (right, bottom), (0, 0, 255), 2)
        cv2.imshow('Face Detection Result', self.image)
        cv2.imshow('Face Detection Result', self.image)
        cv2.waitKey(0)



def main(args=None):
    rclpy.init(args=args)
    face_detect_client_node = FaceDetectClient()
    face_detect_client_node.send_request()
    rclpy.shutdown()
