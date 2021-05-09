// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from spark_msgs:msg/GoalState.idl
// generated code does not contain a copyright notice

#ifndef SPARK_MSGS__MSG__GOAL_STATE__FUNCTIONS_H_
#define SPARK_MSGS__MSG__GOAL_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "spark_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "spark_msgs/msg/goal_state__struct.h"

/// Initialize msg/GoalState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * spark_msgs__msg__GoalState
 * )) before or use
 * spark_msgs__msg__GoalState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
bool
spark_msgs__msg__GoalState__init(spark_msgs__msg__GoalState * msg);

/// Finalize msg/GoalState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
void
spark_msgs__msg__GoalState__fini(spark_msgs__msg__GoalState * msg);

/// Create msg/GoalState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * spark_msgs__msg__GoalState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
spark_msgs__msg__GoalState *
spark_msgs__msg__GoalState__create();

/// Destroy msg/GoalState message.
/**
 * It calls
 * spark_msgs__msg__GoalState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
void
spark_msgs__msg__GoalState__destroy(spark_msgs__msg__GoalState * msg);


/// Initialize array of msg/GoalState messages.
/**
 * It allocates the memory for the number of elements and calls
 * spark_msgs__msg__GoalState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
bool
spark_msgs__msg__GoalState__Sequence__init(spark_msgs__msg__GoalState__Sequence * array, size_t size);

/// Finalize array of msg/GoalState messages.
/**
 * It calls
 * spark_msgs__msg__GoalState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
void
spark_msgs__msg__GoalState__Sequence__fini(spark_msgs__msg__GoalState__Sequence * array);

/// Create array of msg/GoalState messages.
/**
 * It allocates the memory for the array and calls
 * spark_msgs__msg__GoalState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
spark_msgs__msg__GoalState__Sequence *
spark_msgs__msg__GoalState__Sequence__create(size_t size);

/// Destroy array of msg/GoalState messages.
/**
 * It calls
 * spark_msgs__msg__GoalState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
void
spark_msgs__msg__GoalState__Sequence__destroy(spark_msgs__msg__GoalState__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // SPARK_MSGS__MSG__GOAL_STATE__FUNCTIONS_H_
