// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from vision_interfaces:msg/Uart.idl
// generated code does not contain a copyright notice
#include "vision_interfaces/msg/detail/uart__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "vision_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "vision_interfaces/msg/detail/uart__struct.h"
#include "vision_interfaces/msg/detail/uart__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // deviation_x, deviation_y
#include "rosidl_runtime_c/string_functions.h"  // deviation_x, deviation_y

// forward declare type support functions


using _Uart__ros_msg_type = vision_interfaces__msg__Uart;

static bool _Uart__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Uart__ros_msg_type * ros_message = static_cast<const _Uart__ros_msg_type *>(untyped_ros_message);
  // Field name: deviation_x
  {
    const rosidl_runtime_c__String * str = &ros_message->deviation_x;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: deviation_y
  {
    const rosidl_runtime_c__String * str = &ros_message->deviation_y;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: point_x
  {
    cdr << ros_message->point_x;
  }

  // Field name: point_y
  {
    cdr << ros_message->point_y;
  }

  // Field name: turned
  {
    cdr << ros_message->turned;
  }

  return true;
}

static bool _Uart__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Uart__ros_msg_type * ros_message = static_cast<_Uart__ros_msg_type *>(untyped_ros_message);
  // Field name: deviation_x
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->deviation_x.data) {
      rosidl_runtime_c__String__init(&ros_message->deviation_x);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->deviation_x,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'deviation_x'\n");
      return false;
    }
  }

  // Field name: deviation_y
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->deviation_y.data) {
      rosidl_runtime_c__String__init(&ros_message->deviation_y);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->deviation_y,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'deviation_y'\n");
      return false;
    }
  }

  // Field name: point_x
  {
    cdr >> ros_message->point_x;
  }

  // Field name: point_y
  {
    cdr >> ros_message->point_y;
  }

  // Field name: turned
  {
    cdr >> ros_message->turned;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vision_interfaces
size_t get_serialized_size_vision_interfaces__msg__Uart(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Uart__ros_msg_type * ros_message = static_cast<const _Uart__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name deviation_x
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->deviation_x.size + 1);
  // field.name deviation_y
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->deviation_y.size + 1);
  // field.name point_x
  {
    size_t item_size = sizeof(ros_message->point_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name point_y
  {
    size_t item_size = sizeof(ros_message->point_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name turned
  {
    size_t item_size = sizeof(ros_message->turned);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Uart__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_vision_interfaces__msg__Uart(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vision_interfaces
size_t max_serialized_size_vision_interfaces__msg__Uart(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: deviation_x
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: deviation_y
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: point_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: point_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: turned
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = vision_interfaces__msg__Uart;
    is_plain =
      (
      offsetof(DataType, turned) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Uart__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_vision_interfaces__msg__Uart(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Uart = {
  "vision_interfaces::msg",
  "Uart",
  _Uart__cdr_serialize,
  _Uart__cdr_deserialize,
  _Uart__get_serialized_size,
  _Uart__max_serialized_size
};

static rosidl_message_type_support_t _Uart__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Uart,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vision_interfaces, msg, Uart)() {
  return &_Uart__type_support;
}

#if defined(__cplusplus)
}
#endif
