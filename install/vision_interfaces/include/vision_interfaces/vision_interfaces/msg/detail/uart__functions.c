// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vision_interfaces:msg/Uart.idl
// generated code does not contain a copyright notice
#include "vision_interfaces/msg/detail/uart__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `deviation_x`
// Member `deviation_y`
#include "rosidl_runtime_c/string_functions.h"

bool
vision_interfaces__msg__Uart__init(vision_interfaces__msg__Uart * msg)
{
  if (!msg) {
    return false;
  }
  // deviation_x
  if (!rosidl_runtime_c__String__init(&msg->deviation_x)) {
    vision_interfaces__msg__Uart__fini(msg);
    return false;
  }
  // deviation_y
  if (!rosidl_runtime_c__String__init(&msg->deviation_y)) {
    vision_interfaces__msg__Uart__fini(msg);
    return false;
  }
  // point_x
  // point_y
  // turned
  return true;
}

void
vision_interfaces__msg__Uart__fini(vision_interfaces__msg__Uart * msg)
{
  if (!msg) {
    return;
  }
  // deviation_x
  rosidl_runtime_c__String__fini(&msg->deviation_x);
  // deviation_y
  rosidl_runtime_c__String__fini(&msg->deviation_y);
  // point_x
  // point_y
  // turned
}

bool
vision_interfaces__msg__Uart__are_equal(const vision_interfaces__msg__Uart * lhs, const vision_interfaces__msg__Uart * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // deviation_x
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->deviation_x), &(rhs->deviation_x)))
  {
    return false;
  }
  // deviation_y
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->deviation_y), &(rhs->deviation_y)))
  {
    return false;
  }
  // point_x
  if (lhs->point_x != rhs->point_x) {
    return false;
  }
  // point_y
  if (lhs->point_y != rhs->point_y) {
    return false;
  }
  // turned
  if (lhs->turned != rhs->turned) {
    return false;
  }
  return true;
}

bool
vision_interfaces__msg__Uart__copy(
  const vision_interfaces__msg__Uart * input,
  vision_interfaces__msg__Uart * output)
{
  if (!input || !output) {
    return false;
  }
  // deviation_x
  if (!rosidl_runtime_c__String__copy(
      &(input->deviation_x), &(output->deviation_x)))
  {
    return false;
  }
  // deviation_y
  if (!rosidl_runtime_c__String__copy(
      &(input->deviation_y), &(output->deviation_y)))
  {
    return false;
  }
  // point_x
  output->point_x = input->point_x;
  // point_y
  output->point_y = input->point_y;
  // turned
  output->turned = input->turned;
  return true;
}

vision_interfaces__msg__Uart *
vision_interfaces__msg__Uart__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_interfaces__msg__Uart * msg = (vision_interfaces__msg__Uart *)allocator.allocate(sizeof(vision_interfaces__msg__Uart), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vision_interfaces__msg__Uart));
  bool success = vision_interfaces__msg__Uart__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vision_interfaces__msg__Uart__destroy(vision_interfaces__msg__Uart * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vision_interfaces__msg__Uart__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vision_interfaces__msg__Uart__Sequence__init(vision_interfaces__msg__Uart__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_interfaces__msg__Uart * data = NULL;

  if (size) {
    data = (vision_interfaces__msg__Uart *)allocator.zero_allocate(size, sizeof(vision_interfaces__msg__Uart), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vision_interfaces__msg__Uart__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vision_interfaces__msg__Uart__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
vision_interfaces__msg__Uart__Sequence__fini(vision_interfaces__msg__Uart__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vision_interfaces__msg__Uart__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

vision_interfaces__msg__Uart__Sequence *
vision_interfaces__msg__Uart__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_interfaces__msg__Uart__Sequence * array = (vision_interfaces__msg__Uart__Sequence *)allocator.allocate(sizeof(vision_interfaces__msg__Uart__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vision_interfaces__msg__Uart__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vision_interfaces__msg__Uart__Sequence__destroy(vision_interfaces__msg__Uart__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vision_interfaces__msg__Uart__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vision_interfaces__msg__Uart__Sequence__are_equal(const vision_interfaces__msg__Uart__Sequence * lhs, const vision_interfaces__msg__Uart__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vision_interfaces__msg__Uart__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vision_interfaces__msg__Uart__Sequence__copy(
  const vision_interfaces__msg__Uart__Sequence * input,
  vision_interfaces__msg__Uart__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vision_interfaces__msg__Uart);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vision_interfaces__msg__Uart * data =
      (vision_interfaces__msg__Uart *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vision_interfaces__msg__Uart__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vision_interfaces__msg__Uart__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vision_interfaces__msg__Uart__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
