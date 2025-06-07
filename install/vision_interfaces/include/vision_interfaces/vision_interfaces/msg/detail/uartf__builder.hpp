// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vision_interfaces:msg/Uartf.idl
// generated code does not contain a copyright notice

#ifndef VISION_INTERFACES__MSG__DETAIL__UARTF__BUILDER_HPP_
#define VISION_INTERFACES__MSG__DETAIL__UARTF__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vision_interfaces/msg/detail/uartf__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vision_interfaces
{

namespace msg
{

namespace builder
{

class Init_Uartf_deviation_y
{
public:
  explicit Init_Uartf_deviation_y(::vision_interfaces::msg::Uartf & msg)
  : msg_(msg)
  {}
  ::vision_interfaces::msg::Uartf deviation_y(::vision_interfaces::msg::Uartf::_deviation_y_type arg)
  {
    msg_.deviation_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vision_interfaces::msg::Uartf msg_;
};

class Init_Uartf_deviation_x
{
public:
  Init_Uartf_deviation_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Uartf_deviation_y deviation_x(::vision_interfaces::msg::Uartf::_deviation_x_type arg)
  {
    msg_.deviation_x = std::move(arg);
    return Init_Uartf_deviation_y(msg_);
  }

private:
  ::vision_interfaces::msg::Uartf msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vision_interfaces::msg::Uartf>()
{
  return vision_interfaces::msg::builder::Init_Uartf_deviation_x();
}

}  // namespace vision_interfaces

#endif  // VISION_INTERFACES__MSG__DETAIL__UARTF__BUILDER_HPP_
