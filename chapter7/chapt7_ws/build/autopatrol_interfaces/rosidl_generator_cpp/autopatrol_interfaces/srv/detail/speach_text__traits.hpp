// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autopatrol_interfaces:srv/SpeachText.idl
// generated code does not contain a copyright notice

#ifndef AUTOPATROL_INTERFACES__SRV__DETAIL__SPEACH_TEXT__TRAITS_HPP_
#define AUTOPATROL_INTERFACES__SRV__DETAIL__SPEACH_TEXT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autopatrol_interfaces/srv/detail/speach_text__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace autopatrol_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SpeachText_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: text
  {
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SpeachText_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpeachText_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace autopatrol_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use autopatrol_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autopatrol_interfaces::srv::SpeachText_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  autopatrol_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autopatrol_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const autopatrol_interfaces::srv::SpeachText_Request & msg)
{
  return autopatrol_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autopatrol_interfaces::srv::SpeachText_Request>()
{
  return "autopatrol_interfaces::srv::SpeachText_Request";
}

template<>
inline const char * name<autopatrol_interfaces::srv::SpeachText_Request>()
{
  return "autopatrol_interfaces/srv/SpeachText_Request";
}

template<>
struct has_fixed_size<autopatrol_interfaces::srv::SpeachText_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autopatrol_interfaces::srv::SpeachText_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autopatrol_interfaces::srv::SpeachText_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace autopatrol_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SpeachText_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SpeachText_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpeachText_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace autopatrol_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use autopatrol_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autopatrol_interfaces::srv::SpeachText_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  autopatrol_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autopatrol_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const autopatrol_interfaces::srv::SpeachText_Response & msg)
{
  return autopatrol_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autopatrol_interfaces::srv::SpeachText_Response>()
{
  return "autopatrol_interfaces::srv::SpeachText_Response";
}

template<>
inline const char * name<autopatrol_interfaces::srv::SpeachText_Response>()
{
  return "autopatrol_interfaces/srv/SpeachText_Response";
}

template<>
struct has_fixed_size<autopatrol_interfaces::srv::SpeachText_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autopatrol_interfaces::srv::SpeachText_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autopatrol_interfaces::srv::SpeachText_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autopatrol_interfaces::srv::SpeachText>()
{
  return "autopatrol_interfaces::srv::SpeachText";
}

template<>
inline const char * name<autopatrol_interfaces::srv::SpeachText>()
{
  return "autopatrol_interfaces/srv/SpeachText";
}

template<>
struct has_fixed_size<autopatrol_interfaces::srv::SpeachText>
  : std::integral_constant<
    bool,
    has_fixed_size<autopatrol_interfaces::srv::SpeachText_Request>::value &&
    has_fixed_size<autopatrol_interfaces::srv::SpeachText_Response>::value
  >
{
};

template<>
struct has_bounded_size<autopatrol_interfaces::srv::SpeachText>
  : std::integral_constant<
    bool,
    has_bounded_size<autopatrol_interfaces::srv::SpeachText_Request>::value &&
    has_bounded_size<autopatrol_interfaces::srv::SpeachText_Response>::value
  >
{
};

template<>
struct is_service<autopatrol_interfaces::srv::SpeachText>
  : std::true_type
{
};

template<>
struct is_service_request<autopatrol_interfaces::srv::SpeachText_Request>
  : std::true_type
{
};

template<>
struct is_service_response<autopatrol_interfaces::srv::SpeachText_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUTOPATROL_INTERFACES__SRV__DETAIL__SPEACH_TEXT__TRAITS_HPP_
