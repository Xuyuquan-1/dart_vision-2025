// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vision_interfaces:msg/Uart.idl
// generated code does not contain a copyright notice

#ifndef VISION_INTERFACES__MSG__DETAIL__UART__TRAITS_HPP_
#define VISION_INTERFACES__MSG__DETAIL__UART__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "vision_interfaces/msg/detail/uart__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace vision_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Uart & msg,
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
    out << ", ";
  }

  // member: point_x
  {
    out << "point_x: ";
    rosidl_generator_traits::value_to_yaml(msg.point_x, out);
    out << ", ";
  }

  // member: point_y
  {
    out << "point_y: ";
    rosidl_generator_traits::value_to_yaml(msg.point_y, out);
    out << ", ";
  }

  // member: turned
  {
    out << "turned: ";
    rosidl_generator_traits::value_to_yaml(msg.turned, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Uart & msg,
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

  // member: point_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point_x: ";
    rosidl_generator_traits::value_to_yaml(msg.point_x, out);
    out << "\n";
  }

  // member: point_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point_y: ";
    rosidl_generator_traits::value_to_yaml(msg.point_y, out);
    out << "\n";
  }

  // member: turned
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turned: ";
    rosidl_generator_traits::value_to_yaml(msg.turned, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Uart & msg, bool use_flow_style = false)
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
  const vision_interfaces::msg::Uart & msg,
  std::ostream & out, size_t indentation = 0)
{
  vision_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vision_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const vision_interfaces::msg::Uart & msg)
{
  return vision_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<vision_interfaces::msg::Uart>()
{
  return "vision_interfaces::msg::Uart";
}

template<>
inline const char * name<vision_interfaces::msg::Uart>()
{
  return "vision_interfaces/msg/Uart";
}

template<>
struct has_fixed_size<vision_interfaces::msg::Uart>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vision_interfaces::msg::Uart>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vision_interfaces::msg::Uart>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VISION_INTERFACES__MSG__DETAIL__UART__TRAITS_HPP_
