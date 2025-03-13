import cv2
from ament_index_python.packages import get_package_share_directory

def main():
    # 获取默认图片路径
    default_image_path = get_package_share_directory('demo_python_service') + "/resource/images.jpeg"

    # 读取图片
    image = cv2.imread(default_image_path)

    # 加载 OpenCV 的 Haar 级联分类器模型
    face_cascade = cv2.CascadeClassifier(get_package_share_directory('demo_python_service') + "/resource/haarcascade_frontalface_default.xml")

    # 转换为灰度图（Haar 级联分类器要求输入灰度图）
    gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

    # 进行人脸检测
    faces = face_cascade.detectMultiScale(
            gray,
            scaleFactor=1.05,    # 更细的缩放步长
            minNeighbors=3,      # 降低邻居数要求
            minSize=(20, 20)     # 检测较小的人脸
        )


    # 画出检测到的人脸框
    for (x, y, w, h) in faces:
        cv2.rectangle(image, (x, y), (x + w, y + h), (0, 0, 255), 2)

    # 显示结果
    cv2.imshow('Face Detection', image)
    cv2.waitKey(0)
    cv2.destroyAllWindows()
