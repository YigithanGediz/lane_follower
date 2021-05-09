// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from spark_msgs:msg/BehaviourState.idl
// generated code does not contain a copyright notice

#ifndef SPARK_MSGS__MSG__BEHAVIOUR_STATE__FUNCTIONS_H_
#define SPARK_MSGS__MSG__BEHAVIOUR_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "spark_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "spark_msgs/msg/behaviour_state__struct.h"

/// Initialize msg/BehaviourState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * spark_msgs__msg__BehaviourState
 * )) before or use
 * spark_msgs__msg__BehaviourState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
bool
spark_msgs__msg__BehaviourState__init(spark_msgs__msg__BehaviourState * msg);

/// Finalize msg/BehaviourState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
void
spark_msgs__msg__BehaviourState__fini(spark_msgs__msg__BehaviourState * msg);

/// Create msg/BehaviourState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * spark_msgs__msg__BehaviourState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
spark_msgs__msg__BehaviourState *
spark_msgs__msg__BehaviourState__create();

/// Destroy msg/BehaviourState message.
/**
 * It calls
 * spark_msgs__msg__BehaviourState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
void
spark_msgs__msg__BehaviourState__destroy(spark_msgs__msg__BehaviourState * msg);


/// Initialize array of msg/BehaviourState messages.
/**
 * It allocates the memory for the number of elements and calls
 * spark_msgs__msg__BehaviourState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
bool
spark_msgs__msg__BehaviourState__Sequence__init(spark_msgs__msg__BehaviourState__Sequence * array, size_t size);

/// Finalize array of msg/BehaviourState messages.
/**
 * It calls
 * spark_msgs__msg__BehaviourState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
void
spark_msgs__msg__BehaviourState__Sequence__fini(spark_msgs__msg__BehaviourState__Sequence * array);

/// Create array of msg/BehaviourState messages.
/**
 * It allocates the memory for the array and calls
 * spark_msgs__msg__BehaviourState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
spark_msgs__msg__BehaviourState__Sequence *
spark_msgs__msg__BehaviourState__Sequence__create(size_t size);

/// Destroy array of msg/BehaviourState messages.
/**
 * It calls
 * spark_msgs__msg__BehaviourState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
void
spark_msgs__msg__BehaviourState__Sequence__destroy(spark_msgs__msg__BehaviourState__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // SPARK_MSGS__MSG__BEHAVIOUR_STATE__FUNCTIONS_H_
