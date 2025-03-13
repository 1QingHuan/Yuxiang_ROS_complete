import rclpy
from rclpy.node import Node
from chapt4_interfaces.srv import FaceDetect
from ament_index_python.packages import get_package_share_directory
from cv_bridge import CvBridge
import cv2
import time

class FaceDetectNode(Node):
    def __init__(self):
        super().__init__('face_detect_node')

        # 创建 ROS 2 服务
        self.srv = self.create_service(FaceDetect, 'face_detect', self.face_detect_callback)
        self.bridge = CvBridge()

        # 获取资源路径
        package_share_dir = get_package_share_directory('demo_python_service')
        self.get_logger().info("Package share directory: " + package_share_dir)

        # 加载 Haar 级联分类器
        cascade_path = package_share_dir + "/resource/haarcascade_frontalface_default.xml"
        self.get_logger().info("Loading cascade file from: " + cascade_path)
        self.face_cascade = cv2.CascadeClassifier(cascade_path)
        if self.face_cascade.empty():
            self.get_logger().error("Failed to load cascade classifier from " + cascade_path)
        else:
            self.get_logger().info("Cascade classifier loaded successfully.")

        # 读取默认图像
        self.default_image_path = package_share_dir + "/resource/images.jpeg"
        self.get_logger().info("Default image path: " + self.default_image_path)

    def face_detect_callback(self, request, response):
        """ 处理人脸检测请求 """
        # 判断是否接收到图像
        if request.image.data:
            cv_image = self.bridge.imgmsg_to_cv2(request.image, desired_encoding="bgr8")
            self.get_logger().info("Received image from request.")
        else:
            cv_image = cv2.imread(self.default_image_path)
            self.get_logger().info("Using default image from: " + self.default_image_path)

        # 转换为灰度图（Haar 级联检测器要求灰度图像）
        gray_image = cv2.cvtColor(cv_image, cv2.COLOR_BGR2GRAY)

        start_time = time.time()
        self.get_logger().info("Start face detection")

        # 检测人脸
        faces = self.face_cascade.detectMultiScale(
            gray_image,
            scaleFactor=1.1,
            minNeighbors=3,
            minSize=(20, 20)
        )

        end_time = time.time()
        elapsed_time = end_time - start_time
        self.get_logger().info("Face detection finished, time used: {:.3f} seconds".format(elapsed_time))

        # 设置服务响应信息
        response.number = len(faces)
        response.use_time = elapsed_time

        # 存储检测到的人脸框 (top, right, bottom, left)
        for (x, y, w, h) in faces:
            response.top.append(y)
            response.right.append(x + w)
            response.bottom.append(y + h)
            response.left.append(x)

        self.get_logger().info("Detected {} face(s).".format(len(faces)))
        return response

def main(args=None):
    rclpy.init(args=args)
    face_detect_node = FaceDetectNode()
    rclpy.spin(face_detect_node)
    rclpy.shutdown()
