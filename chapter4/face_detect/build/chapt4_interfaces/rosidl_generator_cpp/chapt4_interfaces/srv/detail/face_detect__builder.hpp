// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from chapt4_interfaces:srv/FaceDetect.idl
// generated code does not contain a copyright notice

#ifndef CHAPT4_INTERFACES__SRV__DETAIL__FACE_DETECT__BUILDER_HPP_
#define CHAPT4_INTERFACES__SRV__DETAIL__FACE_DETECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "chapt4_interfaces/srv/detail/face_detect__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace chapt4_interfaces
{

namespace srv
{

namespace builder
{

class Init_FaceDetect_Request_image
{
public:
  Init_FaceDetect_Request_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::chapt4_interfaces::srv::FaceDetect_Request image(::chapt4_interfaces::srv::FaceDetect_Request::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chapt4_interfaces::srv::FaceDetect_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chapt4_interfaces::srv::FaceDetect_Request>()
{
  return chapt4_interfaces::srv::builder::Init_FaceDetect_Request_image();
}

}  // namespace chapt4_interfaces


namespace chapt4_interfaces
{

namespace srv
{

namespace builder
{

class Init_FaceDetect_Response_left
{
public:
  explicit Init_FaceDetect_Response_left(::chapt4_interfaces::srv::FaceDetect_Response & msg)
  : msg_(msg)
  {}
  ::chapt4_interfaces::srv::FaceDetect_Response left(::chapt4_interfaces::srv::FaceDetect_Response::_left_type arg)
  {
    msg_.left = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chapt4_interfaces::srv::FaceDetect_Response msg_;
};

class Init_FaceDetect_Response_bottom
{
public:
  explicit Init_FaceDetect_Response_bottom(::chapt4_interfaces::srv::FaceDetect_Response & msg)
  : msg_(msg)
  {}
  Init_FaceDetect_Response_left bottom(::chapt4_interfaces::srv::FaceDetect_Response::_bottom_type arg)
  {
    msg_.bottom = std::move(arg);
    return Init_FaceDetect_Response_left(msg_);
  }

private:
  ::chapt4_interfaces::srv::FaceDetect_Response msg_;
};

class Init_FaceDetect_Response_right
{
public:
  explicit Init_FaceDetect_Response_right(::chapt4_interfaces::srv::FaceDetect_Response & msg)
  : msg_(msg)
  {}
  Init_FaceDetect_Response_bottom right(::chapt4_interfaces::srv::FaceDetect_Response::_right_type arg)
  {
    msg_.right = std::move(arg);
    return Init_FaceDetect_Response_bottom(msg_);
  }

private:
  ::chapt4_interfaces::srv::FaceDetect_Response msg_;
};

class Init_FaceDetect_Response_top
{
public:
  explicit Init_FaceDetect_Response_top(::chapt4_interfaces::srv::FaceDetect_Response & msg)
  : msg_(msg)
  {}
  Init_FaceDetect_Response_right top(::chapt4_interfaces::srv::FaceDetect_Response::_top_type arg)
  {
    msg_.top = std::move(arg);
    return Init_FaceDetect_Response_right(msg_);
  }

private:
  ::chapt4_interfaces::srv::FaceDetect_Response msg_;
};

class Init_FaceDetect_Response_use_time
{
public:
  explicit Init_FaceDetect_Response_use_time(::chapt4_interfaces::srv::FaceDetect_Response & msg)
  : msg_(msg)
  {}
  Init_FaceDetect_Response_top use_time(::chapt4_interfaces::srv::FaceDetect_Response::_use_time_type arg)
  {
    msg_.use_time = std::move(arg);
    return Init_FaceDetect_Response_top(msg_);
  }

private:
  ::chapt4_interfaces::srv::FaceDetect_Response msg_;
};

class Init_FaceDetect_Response_number
{
public:
  Init_FaceDetect_Response_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FaceDetect_Response_use_time number(::chapt4_interfaces::srv::FaceDetect_Response::_number_type arg)
  {
    msg_.number = std::move(arg);
    return Init_FaceDetect_Response_use_time(msg_);
  }

private:
  ::chapt4_interfaces::srv::FaceDetect_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chapt4_interfaces::srv::FaceDetect_Response>()
{
  return chapt4_interfaces::srv::builder::Init_FaceDetect_Response_number();
}

}  // namespace chapt4_interfaces

#endif  // CHAPT4_INTERFACES__SRV__DETAIL__FACE_DETECT__BUILDER_HPP_
