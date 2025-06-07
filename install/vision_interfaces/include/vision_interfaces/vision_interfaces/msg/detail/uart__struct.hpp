// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vision_interfaces:msg/Uart.idl
// generated code does not contain a copyright notice

#ifndef VISION_INTERFACES__MSG__DETAIL__UART__STRUCT_HPP_
#define VISION_INTERFACES__MSG__DETAIL__UART__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__vision_interfaces__msg__Uart __attribute__((deprecated))
#else
# define DEPRECATED__vision_interfaces__msg__Uart __declspec(deprecated)
#endif

namespace vision_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Uart_
{
  using Type = Uart_<ContainerAllocator>;

  explicit Uart_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->deviation_x = "";
      this->deviation_y = "";
      this->point_x = 0;
      this->point_y = 0;
      this->turned = 0;
    }
  }

  explicit Uart_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : deviation_x(_alloc),
    deviation_y(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->deviation_x = "";
      this->deviation_y = "";
      this->point_x = 0;
      this->point_y = 0;
      this->turned = 0;
    }
  }

  // field types and members
  using _deviation_x_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _deviation_x_type deviation_x;
  using _deviation_y_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _deviation_y_type deviation_y;
  using _point_x_type =
    uint8_t;
  _point_x_type point_x;
  using _point_y_type =
    uint8_t;
  _point_y_type point_y;
  using _turned_type =
    uint8_t;
  _turned_type turned;

  // setters for named parameter idiom
  Type & set__deviation_x(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->deviation_x = _arg;
    return *this;
  }
  Type & set__deviation_y(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->deviation_y = _arg;
    return *this;
  }
  Type & set__point_x(
    const uint8_t & _arg)
  {
    this->point_x = _arg;
    return *this;
  }
  Type & set__point_y(
    const uint8_t & _arg)
  {
    this->point_y = _arg;
    return *this;
  }
  Type & set__turned(
    const uint8_t & _arg)
  {
    this->turned = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vision_interfaces::msg::Uart_<ContainerAllocator> *;
  using ConstRawPtr =
    const vision_interfaces::msg::Uart_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vision_interfaces::msg::Uart_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vision_interfaces::msg::Uart_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vision_interfaces::msg::Uart_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vision_interfaces::msg::Uart_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vision_interfaces::msg::Uart_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vision_interfaces::msg::Uart_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vision_interfaces::msg::Uart_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vision_interfaces::msg::Uart_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vision_interfaces__msg__Uart
    std::shared_ptr<vision_interfaces::msg::Uart_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vision_interfaces__msg__Uart
    std::shared_ptr<vision_interfaces::msg::Uart_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Uart_ & other) const
  {
    if (this->deviation_x != other.deviation_x) {
      return false;
    }
    if (this->deviation_y != other.deviation_y) {
      return false;
    }
    if (this->point_x != other.point_x) {
      return false;
    }
    if (this->point_y != other.point_y) {
      return false;
    }
    if (this->turned != other.turned) {
      return false;
    }
    return true;
  }
  bool operator!=(const Uart_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Uart_

// alias to use template instance with default allocator
using Uart =
  vision_interfaces::msg::Uart_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace vision_interfaces

#endif  // VISION_INTERFACES__MSG__DETAIL__UART__STRUCT_HPP_
