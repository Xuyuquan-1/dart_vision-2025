// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vision_interfaces:msg/Uartf.idl
// generated code does not contain a copyright notice

#ifndef VISION_INTERFACES__MSG__DETAIL__UARTF__STRUCT_H_
#define VISION_INTERFACES__MSG__DETAIL__UARTF__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Uartf in the package vision_interfaces.
typedef struct vision_interfaces__msg__Uartf
{
  float deviation_x;
  float deviation_y;
} vision_interfaces__msg__Uartf;

// Struct for a sequence of vision_interfaces__msg__Uartf.
typedef struct vision_interfaces__msg__Uartf__Sequence
{
  vision_interfaces__msg__Uartf * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vision_interfaces__msg__Uartf__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISION_INTERFACES__MSG__DETAIL__UARTF__STRUCT_H_
