#----------------------------------------------------------------
# Generated CMake target import file for configuration "None".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "console_bridge::console_bridge" for configuration "None"
set_property(TARGET console_bridge::console_bridge APPEND PROPERTY IMPORTED_CONFIGURATIONS NONE)
set_target_properties(console_bridge::console_bridge PROPERTIES
  IMPORTED_LOCATION_NONE "${_IMPORT_PREFIX}/lib/x86_64-linux-gnu/libconsole_bridge.so.1.0"
  IMPORTED_SONAME_NONE "libconsole_bridge.so.1.0"
  )

list(APPEND _IMPORT_CHECK_TARGETS console_bridge::console_bridge )
list(APPEND _IMPORT_CHECK_FILES_FOR_console_bridge::console_bridge "${_IMPORT_PREFIX}/lib/x86_64-linux-gnu/libconsole_bridge.so.1.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
