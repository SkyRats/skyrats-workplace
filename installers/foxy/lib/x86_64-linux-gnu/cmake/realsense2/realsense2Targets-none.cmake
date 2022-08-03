#----------------------------------------------------------------
# Generated CMake target import file for configuration "None".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "realsense2::realsense-file" for configuration "None"
set_property(TARGET realsense2::realsense-file APPEND PROPERTY IMPORTED_CONFIGURATIONS NONE)
set_target_properties(realsense2::realsense-file PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NONE "C;CXX"
  IMPORTED_LOCATION_NONE "${_IMPORT_PREFIX}/lib/x86_64-linux-gnu/librealsense-file.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS realsense2::realsense-file )
list(APPEND _IMPORT_CHECK_FILES_FOR_realsense2::realsense-file "${_IMPORT_PREFIX}/lib/x86_64-linux-gnu/librealsense-file.a" )

# Import target "realsense2::realsense2" for configuration "None"
set_property(TARGET realsense2::realsense2 APPEND PROPERTY IMPORTED_CONFIGURATIONS NONE)
set_target_properties(realsense2::realsense2 PROPERTIES
  IMPORTED_LOCATION_NONE "${_IMPORT_PREFIX}/lib/x86_64-linux-gnu/librealsense2.so.2.50.0"
  IMPORTED_SONAME_NONE "librealsense2.so.2.50"
  )

list(APPEND _IMPORT_CHECK_TARGETS realsense2::realsense2 )
list(APPEND _IMPORT_CHECK_FILES_FOR_realsense2::realsense2 "${_IMPORT_PREFIX}/lib/x86_64-linux-gnu/librealsense2.so.2.50.0" )

# Import target "realsense2::fw" for configuration "None"
set_property(TARGET realsense2::fw APPEND PROPERTY IMPORTED_CONFIGURATIONS NONE)
set_target_properties(realsense2::fw PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NONE "C"
  IMPORTED_LOCATION_NONE "${_IMPORT_PREFIX}/lib/x86_64-linux-gnu/libfw.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS realsense2::fw )
list(APPEND _IMPORT_CHECK_FILES_FOR_realsense2::fw "${_IMPORT_PREFIX}/lib/x86_64-linux-gnu/libfw.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
