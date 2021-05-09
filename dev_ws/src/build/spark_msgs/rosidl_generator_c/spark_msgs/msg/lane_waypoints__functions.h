// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from spark_msgs:msg/LaneWaypoints.idl
// generated code does not contain a copyright notice

#ifndef SPARK_MSGS__MSG__LANE_WAYPOINTS__FUNCTIONS_H_
#define SPARK_MSGS__MSG__LANE_WAYPOINTS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "spark_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "spark_msgs/msg/lane_waypoints__struct.h"

/// Initialize msg/LaneWaypoints message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * spark_msgs__msg__LaneWaypoints
 * )) before or use
 * spark_msgs__msg__LaneWaypoints__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
bool
spark_msgs__msg__LaneWaypoints__init(spark_msgs__msg__LaneWaypoints * msg);

/// Finalize msg/LaneWaypoints message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
void
spark_msgs__msg__LaneWaypoints__fini(spark_msgs__msg__LaneWaypoints * msg);

/// Create msg/LaneWaypoints message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * spark_msgs__msg__LaneWaypoints__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
spark_msgs__msg__LaneWaypoints *
spark_msgs__msg__LaneWaypoints__create();

/// Destroy msg/LaneWaypoints message.
/**
 * It calls
 * spark_msgs__msg__LaneWaypoints__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
void
spark_msgs__msg__LaneWaypoints__destroy(spark_msgs__msg__LaneWaypoints * msg);


/// Initialize array of msg/LaneWaypoints messages.
/**
 * It allocates the memory for the number of elements and calls
 * spark_msgs__msg__LaneWaypoints__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
bool
spark_msgs__msg__LaneWaypoints__Sequence__init(spark_msgs__msg__LaneWaypoints__Sequence * array, size_t size);

/// Finalize array of msg/LaneWaypoints messages.
/**
 * It calls
 * spark_msgs__msg__LaneWaypoints__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
void
spark_msgs__msg__LaneWaypoints__Sequence__fini(spark_msgs__msg__LaneWaypoints__Sequence * array);

/// Create array of msg/LaneWaypoints messages.
/**
 * It allocates the memory for the array and calls
 * spark_msgs__msg__LaneWaypoints__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
spark_msgs__msg__LaneWaypoints__Sequence *
spark_msgs__msg__LaneWaypoints__Sequence__create(size_t size);

/// Destroy array of msg/LaneWaypoints messages.
/**
 * It calls
 * spark_msgs__msg__LaneWaypoints__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_spark_msgs
void
spark_msgs__msg__LaneWaypoints__Sequence__destroy(spark_msgs__msg__LaneWaypoints__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // SPARK_MSGS__MSG__LANE_WAYPOINTS__FUNCTIONS_H_
