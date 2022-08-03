# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_joint_state_controller_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED joint_state_controller_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(joint_state_controller_FOUND FALSE)
  elseif(NOT joint_state_controller_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(joint_state_controller_FOUND FALSE)
  endif()
  return()
endif()
set(_joint_state_controller_CONFIG_INCLUDED TRUE)

# output package information
if(NOT joint_state_controller_FIND_QUIETLY)
  message(STATUS "Found joint_state_controller: 0.8.0 (${joint_state_controller_DIR})")
endif()

# warn when using a deprecated package
if(NOT "This package has been renamed to joint_state_broadcaster in order to
      differentiate between true controllers and simple data broadcasters.
      This package will be removed in ROS H-Turtle. Instead, use package
      joint_state_broadcaster." STREQUAL "")
  set(_msg "Package 'joint_state_controller' is deprecated")
  # append custom deprecation text if available
  if(NOT "This package has been renamed to joint_state_broadcaster in order to
      differentiate between true controllers and simple data broadcasters.
      This package will be removed in ROS H-Turtle. Instead, use package
      joint_state_broadcaster." STREQUAL "TRUE")
    set(_msg "${_msg} (This package has been renamed to joint_state_broadcaster in order to
      differentiate between true controllers and simple data broadcasters.
      This package will be removed in ROS H-Turtle. Instead, use package
      joint_state_broadcaster.)")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${joint_state_controller_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(joint_state_controller_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${joint_state_controller_DIR}/${_extra}")
endforeach()
