import sys
if sys.prefix == '/home/qing/下载/enter':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/qing/ros2_humble/chapter3/chapt3_4/install/status_publisher'
