import sys
if sys.prefix == '/home/qing/下载/enter':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/qing/ros2_humble/chapter7/chapt7_ws/install/fishbot_application'
