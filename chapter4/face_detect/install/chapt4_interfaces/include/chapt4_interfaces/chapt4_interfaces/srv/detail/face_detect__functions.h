// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from chapt4_interfaces:srv/FaceDetect.idl
// generated code does not contain a copyright notice

#ifndef CHAPT4_INTERFACES__SRV__DETAIL__FACE_DETECT__FUNCTIONS_H_
#define CHAPT4_INTERFACES__SRV__DETAIL__FACE_DETECT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "chapt4_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "chapt4_interfaces/srv/detail/face_detect__struct.h"

/// Initialize srv/FaceDetect message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * chapt4_interfaces__srv__FaceDetect_Request
 * )) before or use
 * chapt4_interfaces__srv__FaceDetect_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_chapt4_interfaces
bool
chapt4_interfaces__srv__FaceDetect_Request__init(chapt4_interfaces__srv__FaceDetect_Request * msg);

/// Finalize srv/FaceDetect message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_chapt4_interfaces
void
chapt4_interfaces__srv__FaceDetect_Request__fini(chapt4_interfaces__srv__FaceDetect_Request * msg);

/// Create srv/FaceDetect message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * chapt4_interfaces__srv__FaceDetect_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_chapt4_interfaces
chapt4_interfaces__srv__FaceDetect_Request *
chapt4_interfaces__srv__FaceDetect_Request__create();

/// Destroy srv/FaceDetect message.
/**
 * It calls
 * chapt4_interfaces__srv__FaceDetect_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_chapt4_interfaces
void
chapt4_interfaces__srv__FaceDetect_Request__destroy(chapt4_interfaces__srv__FaceDetect_Request * msg);

/// Check for srv/FaceDetect message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_chapt4_interfaces
bool
chapt4_interfaces__srv__FaceDetect_Request__are_equal(const chapt4_interfaces__srv__FaceDetect_Request * lhs, const chapt4_interfaces__srv__FaceDetect_Request * rhs);

/// Copy a srv/FaceDetect message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_chapt4_interfaces
bool
chapt4_interfaces__srv__FaceDetect_Request__copy(
  const chapt4_interfaces__srv__FaceDetect_Request * input,
  chapt4_interfaces__srv__FaceDetect_Request * output);

/// Initialize array of srv/FaceDetect messages.
/**
 * It allocates the memory for the number of elements and calls
 * chapt4_interfaces__srv__FaceDetect_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_chapt4_interfaces
bool
chapt4_interfaces__srv__FaceDetect_Request__Sequence__init(chapt4_interfaces__srv__FaceDetect_Request__Sequence * array, size_t size);

/// Finalize array of srv/FaceDetect messages.
/**
 * It calls
 * chapt4_interfaces__srv__FaceDetect_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_chapt4_interfaces
void
chapt4_interfaces__srv__FaceDetect_Request__Sequence__fini(chapt4_interfaces__srv__FaceDetect_Request__Sequence * array);

/// Create array of srv/FaceDetect messages.
/**
 * It allocates the memory for the array and calls
 * chapt4_interfaces__srv__FaceDetect_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_chapt4_interfaces
chapt4_interfaces__srv__FaceDetect_Request__Sequence *
chapt4_interfaces__srv__FaceDetect_Request__Sequence__create(size_t size);

/// Destroy array of srv/FaceDetect messages.
/**
 * It calls
 * chapt4_interfaces__srv__FaceDetect_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_chapt4_interfaces
void
chapt4_interfaces__srv__FaceDetect_Request__Sequence__destroy(chapt4_interfaces__srv__FaceDetect_Request__Sequence * array);

/// Check for srv/FaceDetect message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_chapt4_interfaces
bool
chapt4_interfaces__srv__FaceDetect_Request__Sequence__are_equal(const chapt4_interfaces__srv__FaceDetect_Request__Sequence * lhs, const chapt4_interfaces__srv__FaceDetect_Request__Sequence * rhs);

/// Copy an array of srv/FaceDetect messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_chapt4_interfaces
bool
chapt4_interfaces__srv__FaceDetect_Request__Sequence__copy(
  const chapt4_interfaces__srv__FaceDetect_Request__Sequence * input,
  chapt4_interfaces__srv__FaceDetect_Request__Sequence * output);

/// Initialize srv/FaceDetect message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * chapt4_interfaces__srv__FaceDetect_Response
 * )) before or use
 * chapt4_interfaces__srv__FaceDetect_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_chapt4_interfaces
bool
chapt4_interfaces__srv__FaceDetect_Response__init(chapt4_interfaces__srv__FaceDetect_Response * msg);

/// Finalize srv/FaceDetect message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_chapt4_interfaces
void
chapt4_interfaces__srv__FaceDetect_Response__fini(chapt4_interfaces__srv__FaceDetect_Response * msg);

/// Create srv/FaceDetect message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * chapt4_interfaces__srv__FaceDetect_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_chapt4_interfaces
chapt4_interfaces__srv__FaceDetect_Response *
chapt4_interfaces__srv__FaceDetect_Response__create();

/// Destroy srv/FaceDetect message.
/**
 * It calls
 * chapt4_interfaces__srv__FaceDetect_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_chapt4_interfaces
void
chapt4_interfaces__srv__FaceDetect_Response__destroy(chapt4_interfaces__srv__FaceDetect_Response * msg);

/// Check for srv/FaceDetect message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_chapt4_interfaces
bool
chapt4_interfaces__srv__FaceDetect_Response__are_equal(const chapt4_interfaces__srv__FaceDetect_Response * lhs, const chapt4_interfaces__srv__FaceDetect_Response * rhs);

/// Copy a srv/FaceDetect message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_chapt4_interfaces
bool
chapt4_interfaces__srv__FaceDetect_Response__copy(
  const chapt4_interfaces__srv__FaceDetect_Response * input,
  chapt4_interfaces__srv__FaceDetect_Response * output);

/// Initialize array of srv/FaceDetect messages.
/**
 * It allocates the memory for the number of elements and calls
 * chapt4_interfaces__srv__FaceDetect_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_chapt4_interfaces
bool
chapt4_interfaces__srv__FaceDetect_Response__Sequence__init(chapt4_interfaces__srv__FaceDetect_Response__Sequence * array, size_t size);

/// Finalize array of srv/FaceDetect messages.
/**
 * It calls
 * chapt4_interfaces__srv__FaceDetect_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_chapt4_interfaces
void
chapt4_interfaces__srv__FaceDetect_Response__Sequence__fini(chapt4_interfaces__srv__FaceDetect_Response__Sequence * array);

/// Create array of srv/FaceDetect messages.
/**
 * It allocates the memory for the array and calls
 * chapt4_interfaces__srv__FaceDetect_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_chapt4_interfaces
chapt4_interfaces__srv__FaceDetect_Response__Sequence *
chapt4_interfaces__srv__FaceDetect_Response__Sequence__create(size_t size);

/// Destroy array of srv/FaceDetect messages.
/**
 * It calls
 * chapt4_interfaces__srv__FaceDetect_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_chapt4_interfaces
void
chapt4_interfaces__srv__FaceDetect_Response__Sequence__destroy(chapt4_interfaces__srv__FaceDetect_Response__Sequence * array);

/// Check for srv/FaceDetect message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_chapt4_interfaces
bool
chapt4_interfaces__srv__FaceDetect_Response__Sequence__are_equal(const chapt4_interfaces__srv__FaceDetect_Response__Sequence * lhs, const chapt4_interfaces__srv__FaceDetect_Response__Sequence * rhs);

/// Copy an array of srv/FaceDetect messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_chapt4_interfaces
bool
chapt4_interfaces__srv__FaceDetect_Response__Sequence__copy(
  const chapt4_interfaces__srv__FaceDetect_Response__Sequence * input,
  chapt4_interfaces__srv__FaceDetect_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CHAPT4_INTERFACES__SRV__DETAIL__FACE_DETECT__FUNCTIONS_H_
