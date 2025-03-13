import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/qing/ros2_humble/chapter3/chapt3_2/install/novel_speak'
