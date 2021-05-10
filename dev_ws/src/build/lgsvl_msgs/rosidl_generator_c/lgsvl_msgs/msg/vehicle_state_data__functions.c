// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lgsvl_msgs:msg/VehicleStateData.idl
// generated code does not contain a copyright notice
#include "lgsvl_msgs/msg/vehicle_state_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header__functions.h"

bool
lgsvl_msgs__msg__VehicleStateData__init(lgsvl_msgs__msg__VehicleStateData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    lgsvl_msgs__msg__VehicleStateData__fini(msg);
    return false;
  }
  // blinker_state
  // headlight_state
  // wiper_state
  // current_gear
  // vehicle_mode
  // hand_brake_active
  // horn_active
  // autonomous_mode_active
  return true;
}

void
lgsvl_msgs__msg__VehicleStateData__fini(lgsvl_msgs__msg__VehicleStateData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // blinker_state
  // headlight_state
  // wiper_state
  // current_gear
  // vehicle_mode
  // hand_brake_active
  // horn_active
  // autonomous_mode_active
}

lgsvl_msgs__msg__VehicleStateData *
lgsvl_msgs__msg__VehicleStateData__create()
{
  lgsvl_msgs__msg__VehicleStateData * msg = (lgsvl_msgs__msg__VehicleStateData *)malloc(sizeof(lgsvl_msgs__msg__VehicleStateData));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lgsvl_msgs__msg__VehicleStateData));
  bool success = lgsvl_msgs__msg__VehicleStateData__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
lgsvl_msgs__msg__VehicleStateData__destroy(lgsvl_msgs__msg__VehicleStateData * msg)
{
  if (msg) {
    lgsvl_msgs__msg__VehicleStateData__fini(msg);
  }
  free(msg);
}


bool
lgsvl_msgs__msg__VehicleStateData__Sequence__init(lgsvl_msgs__msg__VehicleStateData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  lgsvl_msgs__msg__VehicleStateData * data = NULL;
  if (size) {
    data = (lgsvl_msgs__msg__VehicleStateData *)calloc(size, sizeof(lgsvl_msgs__msg__VehicleStateData));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lgsvl_msgs__msg__VehicleStateData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lgsvl_msgs__msg__VehicleStateData__fini(&data[i - 1]);
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
lgsvl_msgs__msg__VehicleStateData__Sequence__fini(lgsvl_msgs__msg__VehicleStateData__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lgsvl_msgs__msg__VehicleStateData__fini(&array->data[i]);
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

lgsvl_msgs__msg__VehicleStateData__Sequence *
lgsvl_msgs__msg__VehicleStateData__Sequence__create(size_t size)
{
  lgsvl_msgs__msg__VehicleStateData__Sequence * array = (lgsvl_msgs__msg__VehicleStateData__Sequence *)malloc(sizeof(lgsvl_msgs__msg__VehicleStateData__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = lgsvl_msgs__msg__VehicleStateData__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
lgsvl_msgs__msg__VehicleStateData__Sequence__destroy(lgsvl_msgs__msg__VehicleStateData__Sequence * array)
{
  if (array) {
    lgsvl_msgs__msg__VehicleStateData__Sequence__fini(array);
  }
  free(array);
}
