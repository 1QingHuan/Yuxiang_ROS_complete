// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from chapt4_interfaces:srv/FaceDetect.idl
// generated code does not contain a copyright notice

#ifndef CHAPT4_INTERFACES__SRV__DETAIL__FACE_DETECT__STRUCT_H_
#define CHAPT4_INTERFACES__SRV__DETAIL__FACE_DETECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in srv/FaceDetect in the package chapt4_interfaces.
typedef struct chapt4_interfaces__srv__FaceDetect_Request
{
  /// 原始图像
  sensor_msgs__msg__Image image;
} chapt4_interfaces__srv__FaceDetect_Request;

// Struct for a sequence of chapt4_interfaces__srv__FaceDetect_Request.
typedef struct chapt4_interfaces__srv__FaceDetect_Request__Sequence
{
  chapt4_interfaces__srv__FaceDetect_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chapt4_interfaces__srv__FaceDetect_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'top'
// Member 'right'
// Member 'bottom'
// Member 'left'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/FaceDetect in the package chapt4_interfaces.
typedef struct chapt4_interfaces__srv__FaceDetect_Response
{
  /// 人脸数量
  int16_t number;
  /// 检测时间
  float use_time;
  /// 人脸位置
  rosidl_runtime_c__int32__Sequence top;
  rosidl_runtime_c__int32__Sequence right;
  rosidl_runtime_c__int32__Sequence bottom;
  rosidl_runtime_c__int32__Sequence left;
} chapt4_interfaces__srv__FaceDetect_Response;

// Struct for a sequence of chapt4_interfaces__srv__FaceDetect_Response.
typedef struct chapt4_interfaces__srv__FaceDetect_Response__Sequence
{
  chapt4_interfaces__srv__FaceDetect_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chapt4_interfaces__srv__FaceDetect_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CHAPT4_INTERFACES__SRV__DETAIL__FACE_DETECT__STRUCT_H_
