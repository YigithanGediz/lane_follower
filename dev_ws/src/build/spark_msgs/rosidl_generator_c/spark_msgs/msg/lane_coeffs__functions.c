// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from spark_msgs:msg/LaneCoeffs.idl
// generated code does not contain a copyright notice
#include "spark_msgs/msg/lane_coeffs__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_generator_c/string_functions.h"

bool
spark_msgs__msg__LaneCoeffs__init(spark_msgs__msg__LaneCoeffs * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_generator_c__String__init(&msg->name)) {
    spark_msgs__msg__LaneCoeffs__fini(msg);
    return false;
  }
  // slope
  // bias
  return true;
}

void
spark_msgs__msg__LaneCoeffs__fini(spark_msgs__msg__LaneCoeffs * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_generator_c__String__fini(&msg->name);
  // slope
  // bias
}

spark_msgs__msg__LaneCoeffs *
spark_msgs__msg__LaneCoeffs__create()
{
  spark_msgs__msg__LaneCoeffs * msg = (spark_msgs__msg__LaneCoeffs *)malloc(sizeof(spark_msgs__msg__LaneCoeffs));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(spark_msgs__msg__LaneCoeffs));
  bool success = spark_msgs__msg__LaneCoeffs__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
spark_msgs__msg__LaneCoeffs__destroy(spark_msgs__msg__LaneCoeffs * msg)
{
  if (msg) {
    spark_msgs__msg__LaneCoeffs__fini(msg);
  }
  free(msg);
}


bool
spark_msgs__msg__LaneCoeffs__Sequence__init(spark_msgs__msg__LaneCoeffs__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  spark_msgs__msg__LaneCoeffs * data = NULL;
  if (size) {
    data = (spark_msgs__msg__LaneCoeffs *)calloc(size, sizeof(spark_msgs__msg__LaneCoeffs));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = spark_msgs__msg__LaneCoeffs__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        spark_msgs__msg__LaneCoeffs__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
spark_msgs__msg__LaneCoeffs__Sequence__fini(spark_msgs__msg__LaneCoeffs__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      spark_msgs__msg__LaneCoeffs__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

spark_msgs__msg__LaneCoeffs__Sequence *
spark_msgs__msg__LaneCoeffs__Sequence__create(size_t size)
{
  spark_msgs__msg__LaneCoeffs__Sequence * array = (spark_msgs__msg__LaneCoeffs__Sequence *)malloc(sizeof(spark_msgs__msg__LaneCoeffs__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = spark_msgs__msg__LaneCoeffs__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
spark_msgs__msg__LaneCoeffs__Sequence__destroy(spark_msgs__msg__LaneCoeffs__Sequence * array)
{
  if (array) {
    spark_msgs__msg__LaneCoeffs__Sequence__fini(array);
  }
  free(array);
}
