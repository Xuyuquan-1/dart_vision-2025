// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vision_interfaces:msg/Uart.idl
// generated code does not contain a copyright notice

#ifndef VISION_INTERFACES__MSG__DETAIL__UART__STRUCT_H_
#define VISION_INTERFACES__MSG__DETAIL__UART__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'deviation_x'
// Member 'deviation_y'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Uart in the package vision_interfaces.
typedef struct vision_interfaces__msg__Uart
{
  rosidl_runtime_c__String deviation_x;
  rosidl_runtime_c__String deviation_y;
  uint8_t point_x;
  uint8_t point_y;
  uint8_t turned;
} vision_interfaces__msg__Uart;

// Struct for a sequence of vision_interfaces__msg__Uart.
typedef struct vision_interfaces__msg__Uart__Sequence
{
  vision_interfaces__msg__Uart * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vision_interfaces__msg__Uart__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISION_INTERFACES__MSG__DETAIL__UART__STRUCT_H_
