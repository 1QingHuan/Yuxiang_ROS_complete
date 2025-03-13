import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/qing/ros2_humble/chapter4/face_detect/install/demo_python_service'
