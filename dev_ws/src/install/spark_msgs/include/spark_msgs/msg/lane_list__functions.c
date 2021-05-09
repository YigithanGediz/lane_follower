// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from spark_msgs:msg/LaneList.idl
// generated code does not contain a copyright notice
#include "spark_msgs/msg/lane_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header__functions.h"
// Member `x_coords`
// Member `y_coords`
#include "spark_msgs/msg/lane__functions.h"

bool
spark_msgs__msg__LaneList__init(spark_msgs__msg__LaneList * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    spark_msgs__msg__LaneList__fini(msg);
    return false;
  }
  // x_coords
  if (!spark_msgs__msg__Lane__Sequence__init(&msg->x_coords, 0)) {
    spark_msgs__msg__LaneList__fini(msg);
    return false;
  }
  // y_coords
  if (!spark_msgs__msg__Lane__Sequence__init(&msg->y_coords, 0)) {
    spark_msgs__msg__LaneList__fini(msg);
    return false;
  }
  return true;
}

void
spark_msgs__msg__LaneList__fini(spark_msgs__msg__LaneList * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // x_coords
  spark_msgs__msg__Lane__Sequence__fini(&msg->x_coords);
  // y_coords
  spark_msgs__msg__Lane__Sequence__fini(&msg->y_coords);
}

spark_msgs__msg__LaneList *
spark_msgs__msg__LaneList__create()
{
  spark_msgs__msg__LaneList * msg = (spark_msgs__msg__LaneList *)malloc(sizeof(spark_msgs__msg__LaneList));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(spark_msgs__msg__LaneList));
  bool success = spark_msgs__msg__LaneList__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
spark_msgs__msg__LaneList__destroy(spark_msgs__msg__LaneList * msg)
{
  if (msg) {
    spark_msgs__msg__LaneList__fini(msg);
  }
  free(msg);
}


bool
spark_msgs__msg__LaneList__Sequence__init(spark_msgs__msg__LaneList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  spark_msgs__msg__LaneList * data = NULL;
  if (size) {
    data = (spark_msgs__msg__LaneList *)calloc(size, sizeof(spark_msgs__msg__LaneList));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = spark_msgs__msg__LaneList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        spark_msgs__msg__LaneList__fini(&data[i - 1]);
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
spark_msgs__msg__LaneList__Sequence__fini(spark_msgs__msg__LaneList__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      spark_msgs__msg__LaneList__fini(&array->data[i]);
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

spark_msgs__msg__LaneList__Sequence *
spark_msgs__msg__LaneList__Sequence__create(size_t size)
{
  spark_msgs__msg__LaneList__Sequence * array = (spark_msgs__msg__LaneList__Sequence *)malloc(sizeof(spark_msgs__msg__LaneList__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = spark_msgs__msg__LaneList__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
spark_msgs__msg__LaneList__Sequence__destroy(spark_msgs__msg__LaneList__Sequence * array)
{
  if (array) {
    spark_msgs__msg__LaneList__Sequence__fini(array);
  }
  free(array);
}
