// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from spark_msgs:msg/WaypointsList.idl
// generated code does not contain a copyright notice

#ifndef SPARK_MSGS__MSG__WAYPOINTS_LIST__FUNCTIONS_H_
#define SPARK_MSGS__MSG__WAYPOINTS_LIST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "spark_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "spark_msgs/msg/waypoints_list__struct.h"

/// Initialize msg/WaypointsList message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * spark_msgs__msg__WaypointsList
 * )) before or use
 * spark_msgs__msg__WaypointsList__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
bool
spark_msgs__msg__WaypointsList__init(spark_msgs__msg__WaypointsList * msg);

/// Finalize msg/WaypointsList message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
void
spark_msgs__msg__WaypointsList__fini(spark_msgs__msg__WaypointsList * msg);

/// Create msg/WaypointsList message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * spark_msgs__msg__WaypointsList__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
spark_msgs__msg__WaypointsList *
spark_msgs__msg__WaypointsList__create();

/// Destroy msg/WaypointsList message.
/**
 * It calls
 * spark_msgs__msg__WaypointsList__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
void
spark_msgs__msg__WaypointsList__destroy(spark_msgs__msg__WaypointsList * msg);


/// Initialize array of msg/WaypointsList messages.
/**
 * It allocates the memory for the number of elements and calls
 * spark_msgs__msg__WaypointsList__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
bool
spark_msgs__msg__WaypointsList__Sequence__init(spark_msgs__msg__WaypointsList__Sequence * array, size_t size);

/// Finalize array of msg/WaypointsList messages.
/**
 * It calls
 * spark_msgs__msg__WaypointsList__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
void
spark_msgs__msg__WaypointsList__Sequence__fini(spark_msgs__msg__WaypointsList__Sequence * array);

/// Create array of msg/WaypointsList messages.
/**
 * It allocates the memory for the array and calls
 * spark_msgs__msg__WaypointsList__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
spark_msgs__msg__WaypointsList__Sequence *
spark_msgs__msg__WaypointsList__Sequence__create(size_t size);

/// Destroy array of msg/WaypointsList messages.
/**
 * It calls
 * spark_msgs__msg__WaypointsList__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
void
spark_msgs__msg__WaypointsList__Sequence__destroy(spark_msgs__msg__WaypointsList__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // SPARK_MSGS__MSG__WAYPOINTS_LIST__FUNCTIONS_H_
