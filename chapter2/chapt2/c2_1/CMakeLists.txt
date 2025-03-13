cmake_minimum_required(VERSION 3.8)
project(c2_1) # 项目名称，通常与包名一致

# 添加可执行文件
add_executable(ros2_cpp_node ros2_cpp_node.cpp)

# 查找依赖包
find_package(rclcpp REQUIRED)
# 添加依赖包头文件路径
target_include_directories(ros2_cpp_node PUBLIC ${rclcpp_INCLUDE_DIRS})
# 添加依赖包链接库
target_link_libraries(ros2_cpp_node ${rclcpp_LIBRARIES})
