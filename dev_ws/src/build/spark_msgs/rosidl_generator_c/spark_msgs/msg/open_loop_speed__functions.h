// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from spark_msgs:msg/OpenLoopSpeed.idl
// generated code does not contain a copyright notice

#ifndef SPARK_MSGS__MSG__OPEN_LOOP_SPEED__FUNCTIONS_H_
#define SPARK_MSGS__MSG__OPEN_LOOP_SPEED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "spark_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "spark_msgs/msg/open_loop_speed__struct.h"

/// Initialize msg/OpenLoopSpeed message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * spark_msgs__msg__OpenLoopSpeed
 * )) before or use
 * spark_msgs__msg__OpenLoopSpeed__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
bool
spark_msgs__msg__OpenLoopSpeed__init(spark_msgs__msg__OpenLoopSpeed * msg);

/// Finalize msg/OpenLoopSpeed message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
void
spark_msgs__msg__OpenLoopSpeed__fini(spark_msgs__msg__OpenLoopSpeed * msg);

/// Create msg/OpenLoopSpeed message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * spark_msgs__msg__OpenLoopSpeed__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
spark_msgs__msg__OpenLoopSpeed *
spark_msgs__msg__OpenLoopSpeed__create();

/// Destroy msg/OpenLoopSpeed message.
/**
 * It calls
 * spark_msgs__msg__OpenLoopSpeed__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
void
spark_msgs__msg__OpenLoopSpeed__destroy(spark_msgs__msg__OpenLoopSpeed * msg);


/// Initialize array of msg/OpenLoopSpeed messages.
/**
 * It allocates the memory for the number of elements and calls
 * spark_msgs__msg__OpenLoopSpeed__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
bool
spark_msgs__msg__OpenLoopSpeed__Sequence__init(spark_msgs__msg__OpenLoopSpeed__Sequence * array, size_t size);

/// Finalize array of msg/OpenLoopSpeed messages.
/**
 * It calls
 * spark_msgs__msg__OpenLoopSpeed__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
void
spark_msgs__msg__OpenLoopSpeed__Sequence__fini(spark_msgs__msg__OpenLoopSpeed__Sequence * array);

/// Create array of msg/OpenLoopSpeed messages.
/**
 * It allocates the memory for the array and calls
 * spark_msgs__msg__OpenLoopSpeed__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
spark_msgs__msg__OpenLoopSpeed__Sequence *
spark_msgs__msg__OpenLoopSpeed__Sequence__create(size_t size);

/// Destroy array of msg/OpenLoopSpeed messages.
/**
 * It calls
 * spark_msgs__msg__OpenLoopSpeed__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
void
spark_msgs__msg__OpenLoopSpeed__Sequence__destroy(spark_msgs__msg__OpenLoopSpeed__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // SPARK_MSGS__MSG__OPEN_LOOP_SPEED__FUNCTIONS_H_
