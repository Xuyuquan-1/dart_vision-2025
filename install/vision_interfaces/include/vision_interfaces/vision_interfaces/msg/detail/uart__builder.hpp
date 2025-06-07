// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vision_interfaces:msg/Uart.idl
// generated code does not contain a copyright notice

#ifndef VISION_INTERFACES__MSG__DETAIL__UART__BUILDER_HPP_
#define VISION_INTERFACES__MSG__DETAIL__UART__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vision_interfaces/msg/detail/uart__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vision_interfaces
{

namespace msg
{

namespace builder
{

class Init_Uart_turned
{
public:
  explicit Init_Uart_turned(::vision_interfaces::msg::Uart & msg)
  : msg_(msg)
  {}
  ::vision_interfaces::msg::Uart turned(::vision_interfaces::msg::Uart::_turned_type arg)
  {
    msg_.turned = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vision_interfaces::msg::Uart msg_;
};

class Init_Uart_point_y
{
public:
  explicit Init_Uart_point_y(::vision_interfaces::msg::Uart & msg)
  : msg_(msg)
  {}
  Init_Uart_turned point_y(::vision_interfaces::msg::Uart::_point_y_type arg)
  {
    msg_.point_y = std::move(arg);
    return Init_Uart_turned(msg_);
  }

private:
  ::vision_interfaces::msg::Uart msg_;
};

class Init_Uart_point_x
{
public:
  explicit Init_Uart_point_x(::vision_interfaces::msg::Uart & msg)
  : msg_(msg)
  {}
  Init_Uart_point_y point_x(::vision_interfaces::msg::Uart::_point_x_type arg)
  {
    msg_.point_x = std::move(arg);
    return Init_Uart_point_y(msg_);
  }

private:
  ::vision_interfaces::msg::Uart msg_;
};

class Init_Uart_deviation_y
{
public:
  explicit Init_Uart_deviation_y(::vision_interfaces::msg::Uart & msg)
  : msg_(msg)
  {}
  Init_Uart_point_x deviation_y(::vision_interfaces::msg::Uart::_deviation_y_type arg)
  {
    msg_.deviation_y = std::move(arg);
    return Init_Uart_point_x(msg_);
  }

private:
  ::vision_interfaces::msg::Uart msg_;
};

class Init_Uart_deviation_x
{
public:
  Init_Uart_deviation_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Uart_deviation_y deviation_x(::vision_interfaces::msg::Uart::_deviation_x_type arg)
  {
    msg_.deviation_x = std::move(arg);
    return Init_Uart_deviation_y(msg_);
  }

private:
  ::vision_interfaces::msg::Uart msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vision_interfaces::msg::Uart>()
{
  return vision_interfaces::msg::builder::Init_Uart_deviation_x();
}

}  // namespace vision_interfaces

#endif  // VISION_INTERFACES__MSG__DETAIL__UART__BUILDER_HPP_
