// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from spark_msgs:msg/BehaviourState.idl
// generated code does not contain a copyright notice
#include "spark_msgs/msg/behaviour_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header__functions.h"

bool
spark_msgs__msg__BehaviourState__init(spark_msgs__msg__BehaviourState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    spark_msgs__msg__BehaviourState__fini(msg);
    return false;
  }
  // state
  return true;
}

void
spark_msgs__msg__BehaviourState__fini(spark_msgs__msg__BehaviourState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // state
}

spark_msgs__msg__BehaviourState *
spark_msgs__msg__BehaviourState__create()
{
  spark_msgs__msg__BehaviourState * msg = (spark_msgs__msg__BehaviourState *)malloc(sizeof(spark_msgs__msg__BehaviourState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(spark_msgs__msg__BehaviourState));
  bool success = spark_msgs__msg__BehaviourState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
spark_msgs__msg__BehaviourState__destroy(spark_msgs__msg__BehaviourState * msg)
{
  if (msg) {
    spark_msgs__msg__BehaviourState__fini(msg);
  }
  free(msg);
}


bool
spark_msgs__msg__BehaviourState__Sequence__init(spark_msgs__msg__BehaviourState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  spark_msgs__msg__BehaviourState * data = NULL;
  if (size) {
    data = (spark_msgs__msg__BehaviourState *)calloc(size, sizeof(spark_msgs__msg__BehaviourState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = spark_msgs__msg__BehaviourState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        spark_msgs__msg__BehaviourState__fini(&data[i - 1]);
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
spark_msgs__msg__BehaviourState__Sequence__fini(spark_msgs__msg__BehaviourState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      spark_msgs__msg__BehaviourState__fini(&array->data[i]);
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

spark_msgs__msg__BehaviourState__Sequence *
spark_msgs__msg__BehaviourState__Sequence__create(size_t size)
{
  spark_msgs__msg__BehaviourState__Sequence * array = (spark_msgs__msg__BehaviourState__Sequence *)malloc(sizeof(spark_msgs__msg__BehaviourState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = spark_msgs__msg__BehaviourState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
spark_msgs__msg__BehaviourState__Sequence__destroy(spark_msgs__msg__BehaviourState__Sequence * array)
{
  if (array) {
    spark_msgs__msg__BehaviourState__Sequence__fini(array);
  }
  free(array);
}
