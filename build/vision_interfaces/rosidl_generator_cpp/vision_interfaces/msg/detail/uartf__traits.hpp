// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vision_interfaces:msg/Uartf.idl
// generated code does not contain a copyright notice

#ifndef VISION_INTERFACES__MSG__DETAIL__UARTF__TRAITS_HPP_
#define VISION_INTERFACES__MSG__DETAIL__UARTF__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "vision_interfaces/msg/detail/uartf__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace vision_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Uartf & msg,
  std::ostream & out)
{
  out << "{";
  // member: deviation_x
  {
    out << "deviation_x: ";
    rosidl_generator_traits::value_to_yaml(msg.deviation_x, out);
    out << ", ";
  }

  // member: deviation_y
  {
    out << "deviation_y: ";
    rosidl_generator_traits::value_to_yaml(msg.deviation_y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Uartf & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: deviation_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deviation_x: ";
    rosidl_generator_traits::value_to_yaml(msg.deviation_x, out);
    out << "\n";
  }

  // member: deviation_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deviation_y: ";
    rosidl_generator_traits::value_to_yaml(msg.deviation_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Uartf & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace vision_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use vision_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vision_interfaces::msg::Uartf & msg,
  std::ostream & out, size_t indentation = 0)
{
  vision_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vision_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const vision_interfaces::msg::Uartf & msg)
{
  return vision_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<vision_interfaces::msg::Uartf>()
{
  return "vision_interfaces::msg::Uartf";
}

template<>
inline const char * name<vision_interfaces::msg::Uartf>()
{
  return "vision_interfaces/msg/Uartf";
}

template<>
struct has_fixed_size<vision_interfaces::msg::Uartf>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<vision_interfaces::msg::Uartf>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<vision_interfaces::msg::Uartf>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VISION_INTERFACES__MSG__DETAIL__UARTF__TRAITS_HPP_
