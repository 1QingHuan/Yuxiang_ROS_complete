import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/qing/ros2_humble/chapter5/chapt5_1/install/demo_python_tf'
