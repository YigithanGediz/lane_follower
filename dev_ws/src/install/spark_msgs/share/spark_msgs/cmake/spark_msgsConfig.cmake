# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_spark_msgs_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED spark_msgs_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(spark_msgs_FOUND FALSE)
  elseif(NOT spark_msgs_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(spark_msgs_FOUND FALSE)
  endif()
  return()
endif()
set(_spark_msgs_CONFIG_INCLUDED TRUE)

# output package information
if(NOT spark_msgs_FIND_QUIETLY)
  message(STATUS "Found spark_msgs: 0.0.0 (${spark_msgs_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'spark_msgs' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(spark_msgs_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "rosidl_cmake-extras.cmake;ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${spark_msgs_DIR}/${_extra}")
endforeach()
