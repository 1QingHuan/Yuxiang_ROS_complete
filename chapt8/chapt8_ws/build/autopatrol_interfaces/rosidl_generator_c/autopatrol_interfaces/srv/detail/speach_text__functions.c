// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autopatrol_interfaces:srv/SpeachText.idl
// generated code does not contain a copyright notice
#include "autopatrol_interfaces/srv/detail/speach_text__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `text`
#include "rosidl_runtime_c/string_functions.h"

bool
autopatrol_interfaces__srv__SpeachText_Request__init(autopatrol_interfaces__srv__SpeachText_Request * msg)
{
  if (!msg) {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__init(&msg->text)) {
    autopatrol_interfaces__srv__SpeachText_Request__fini(msg);
    return false;
  }
  return true;
}

void
autopatrol_interfaces__srv__SpeachText_Request__fini(autopatrol_interfaces__srv__SpeachText_Request * msg)
{
  if (!msg) {
    return;
  }
  // text
  rosidl_runtime_c__String__fini(&msg->text);
}

bool
autopatrol_interfaces__srv__SpeachText_Request__are_equal(const autopatrol_interfaces__srv__SpeachText_Request * lhs, const autopatrol_interfaces__srv__SpeachText_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->text), &(rhs->text)))
  {
    return false;
  }
  return true;
}

bool
autopatrol_interfaces__srv__SpeachText_Request__copy(
  const autopatrol_interfaces__srv__SpeachText_Request * input,
  autopatrol_interfaces__srv__SpeachText_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__copy(
      &(input->text), &(output->text)))
  {
    return false;
  }
  return true;
}

autopatrol_interfaces__srv__SpeachText_Request *
autopatrol_interfaces__srv__SpeachText_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autopatrol_interfaces__srv__SpeachText_Request * msg = (autopatrol_interfaces__srv__SpeachText_Request *)allocator.allocate(sizeof(autopatrol_interfaces__srv__SpeachText_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autopatrol_interfaces__srv__SpeachText_Request));
  bool success = autopatrol_interfaces__srv__SpeachText_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autopatrol_interfaces__srv__SpeachText_Request__destroy(autopatrol_interfaces__srv__SpeachText_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autopatrol_interfaces__srv__SpeachText_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autopatrol_interfaces__srv__SpeachText_Request__Sequence__init(autopatrol_interfaces__srv__SpeachText_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autopatrol_interfaces__srv__SpeachText_Request * data = NULL;

  if (size) {
    data = (autopatrol_interfaces__srv__SpeachText_Request *)allocator.zero_allocate(size, sizeof(autopatrol_interfaces__srv__SpeachText_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autopatrol_interfaces__srv__SpeachText_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autopatrol_interfaces__srv__SpeachText_Request__fini(&data[i - 1]);
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
autopatrol_interfaces__srv__SpeachText_Request__Sequence__fini(autopatrol_interfaces__srv__SpeachText_Request__Sequence * array)
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
      autopatrol_interfaces__srv__SpeachText_Request__fini(&array->data[i]);
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

autopatrol_interfaces__srv__SpeachText_Request__Sequence *
autopatrol_interfaces__srv__SpeachText_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autopatrol_interfaces__srv__SpeachText_Request__Sequence * array = (autopatrol_interfaces__srv__SpeachText_Request__Sequence *)allocator.allocate(sizeof(autopatrol_interfaces__srv__SpeachText_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autopatrol_interfaces__srv__SpeachText_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autopatrol_interfaces__srv__SpeachText_Request__Sequence__destroy(autopatrol_interfaces__srv__SpeachText_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autopatrol_interfaces__srv__SpeachText_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autopatrol_interfaces__srv__SpeachText_Request__Sequence__are_equal(const autopatrol_interfaces__srv__SpeachText_Request__Sequence * lhs, const autopatrol_interfaces__srv__SpeachText_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autopatrol_interfaces__srv__SpeachText_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autopatrol_interfaces__srv__SpeachText_Request__Sequence__copy(
  const autopatrol_interfaces__srv__SpeachText_Request__Sequence * input,
  autopatrol_interfaces__srv__SpeachText_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autopatrol_interfaces__srv__SpeachText_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autopatrol_interfaces__srv__SpeachText_Request * data =
      (autopatrol_interfaces__srv__SpeachText_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autopatrol_interfaces__srv__SpeachText_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autopatrol_interfaces__srv__SpeachText_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autopatrol_interfaces__srv__SpeachText_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
autopatrol_interfaces__srv__SpeachText_Response__init(autopatrol_interfaces__srv__SpeachText_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
autopatrol_interfaces__srv__SpeachText_Response__fini(autopatrol_interfaces__srv__SpeachText_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
autopatrol_interfaces__srv__SpeachText_Response__are_equal(const autopatrol_interfaces__srv__SpeachText_Response * lhs, const autopatrol_interfaces__srv__SpeachText_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
autopatrol_interfaces__srv__SpeachText_Response__copy(
  const autopatrol_interfaces__srv__SpeachText_Response * input,
  autopatrol_interfaces__srv__SpeachText_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

autopatrol_interfaces__srv__SpeachText_Response *
autopatrol_interfaces__srv__SpeachText_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autopatrol_interfaces__srv__SpeachText_Response * msg = (autopatrol_interfaces__srv__SpeachText_Response *)allocator.allocate(sizeof(autopatrol_interfaces__srv__SpeachText_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autopatrol_interfaces__srv__SpeachText_Response));
  bool success = autopatrol_interfaces__srv__SpeachText_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autopatrol_interfaces__srv__SpeachText_Response__destroy(autopatrol_interfaces__srv__SpeachText_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autopatrol_interfaces__srv__SpeachText_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autopatrol_interfaces__srv__SpeachText_Response__Sequence__init(autopatrol_interfaces__srv__SpeachText_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autopatrol_interfaces__srv__SpeachText_Response * data = NULL;

  if (size) {
    data = (autopatrol_interfaces__srv__SpeachText_Response *)allocator.zero_allocate(size, sizeof(autopatrol_interfaces__srv__SpeachText_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autopatrol_interfaces__srv__SpeachText_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autopatrol_interfaces__srv__SpeachText_Response__fini(&data[i - 1]);
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
autopatrol_interfaces__srv__SpeachText_Response__Sequence__fini(autopatrol_interfaces__srv__SpeachText_Response__Sequence * array)
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
      autopatrol_interfaces__srv__SpeachText_Response__fini(&array->data[i]);
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

autopatrol_interfaces__srv__SpeachText_Response__Sequence *
autopatrol_interfaces__srv__SpeachText_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autopatrol_interfaces__srv__SpeachText_Response__Sequence * array = (autopatrol_interfaces__srv__SpeachText_Response__Sequence *)allocator.allocate(sizeof(autopatrol_interfaces__srv__SpeachText_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autopatrol_interfaces__srv__SpeachText_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autopatrol_interfaces__srv__SpeachText_Response__Sequence__destroy(autopatrol_interfaces__srv__SpeachText_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autopatrol_interfaces__srv__SpeachText_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autopatrol_interfaces__srv__SpeachText_Response__Sequence__are_equal(const autopatrol_interfaces__srv__SpeachText_Response__Sequence * lhs, const autopatrol_interfaces__srv__SpeachText_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autopatrol_interfaces__srv__SpeachText_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autopatrol_interfaces__srv__SpeachText_Response__Sequence__copy(
  const autopatrol_interfaces__srv__SpeachText_Response__Sequence * input,
  autopatrol_interfaces__srv__SpeachText_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autopatrol_interfaces__srv__SpeachText_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autopatrol_interfaces__srv__SpeachText_Response * data =
      (autopatrol_interfaces__srv__SpeachText_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autopatrol_interfaces__srv__SpeachText_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autopatrol_interfaces__srv__SpeachText_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autopatrol_interfaces__srv__SpeachText_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
