// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vision_interfaces:msg/Uartf.idl
// generated code does not contain a copyright notice

#ifndef VISION_INTERFACES__MSG__DETAIL__UARTF__STRUCT_HPP_
#define VISION_INTERFACES__MSG__DETAIL__UARTF__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__vision_interfaces__msg__Uartf __attribute__((deprecated))
#else
# define DEPRECATED__vision_interfaces__msg__Uartf __declspec(deprecated)
#endif

namespace vision_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Uartf_
{
  using Type = Uartf_<ContainerAllocator>;

  explicit Uartf_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->deviation_x = 0.0f;
      this->deviation_y = 0.0f;
    }
  }

  explicit Uartf_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->deviation_x = 0.0f;
      this->deviation_y = 0.0f;
    }
  }

  // field types and members
  using _deviation_x_type =
    float;
  _deviation_x_type deviation_x;
  using _deviation_y_type =
    float;
  _deviation_y_type deviation_y;

  // setters for named parameter idiom
  Type & set__deviation_x(
    const float & _arg)
  {
    this->deviation_x = _arg;
    return *this;
  }
  Type & set__deviation_y(
    const float & _arg)
  {
    this->deviation_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vision_interfaces::msg::Uartf_<ContainerAllocator> *;
  using ConstRawPtr =
    const vision_interfaces::msg::Uartf_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vision_interfaces::msg::Uartf_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vision_interfaces::msg::Uartf_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vision_interfaces::msg::Uartf_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vision_interfaces::msg::Uartf_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vision_interfaces::msg::Uartf_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vision_interfaces::msg::Uartf_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vision_interfaces::msg::Uartf_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vision_interfaces::msg::Uartf_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vision_interfaces__msg__Uartf
    std::shared_ptr<vision_interfaces::msg::Uartf_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vision_interfaces__msg__Uartf
    std::shared_ptr<vision_interfaces::msg::Uartf_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Uartf_ & other) const
  {
    if (this->deviation_x != other.deviation_x) {
      return false;
    }
    if (this->deviation_y != other.deviation_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const Uartf_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Uartf_

// alias to use template instance with default allocator
using Uartf =
  vision_interfaces::msg::Uartf_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace vision_interfaces

#endif  // VISION_INTERFACES__MSG__DETAIL__UARTF__STRUCT_HPP_
