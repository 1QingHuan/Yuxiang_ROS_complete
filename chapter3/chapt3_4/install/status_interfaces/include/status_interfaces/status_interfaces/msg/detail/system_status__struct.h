// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from status_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#ifndef STATUS_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_
#define STATUS_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'host_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SystemStatus in the package status_interfaces.
typedef struct status_interfaces__msg__SystemStatus
{
  /// 时间戳，记录该数据的采集时间
  builtin_interfaces__msg__Time stamp;
  /// 采集该数据的计算机的主机名
  rosidl_runtime_c__String host_name;
  /// CPU 使用率（百分比）
  float cpu_percent;
  /// 内存使用率（百分比）
  float memory_percent;
  /// 计算机的总内存（MB 或 GB，取决于实现）
  float memory_total;
  /// 可用内存大小（MB 或 GB）
  float memory_available;
  /// 网络已发送数据量（单位：字节或 MB，取决于实现）
  double net_sent;
  /// 网络已接收数据量（单位：字节或 MB，取决于实现）
  double net_recv;
} status_interfaces__msg__SystemStatus;

// Struct for a sequence of status_interfaces__msg__SystemStatus.
typedef struct status_interfaces__msg__SystemStatus__Sequence
{
  status_interfaces__msg__SystemStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} status_interfaces__msg__SystemStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STATUS_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_
