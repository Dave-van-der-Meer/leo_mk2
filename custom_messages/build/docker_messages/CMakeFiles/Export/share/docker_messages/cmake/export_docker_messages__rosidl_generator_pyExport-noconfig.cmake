#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "docker_messages::docker_messages__rosidl_generator_py" for configuration ""
set_property(TARGET docker_messages::docker_messages__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(docker_messages::docker_messages__rosidl_generator_py PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libdocker_messages__rosidl_generator_py.so"
  IMPORTED_SONAME_NOCONFIG "libdocker_messages__rosidl_generator_py.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS docker_messages::docker_messages__rosidl_generator_py )
list(APPEND _IMPORT_CHECK_FILES_FOR_docker_messages::docker_messages__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libdocker_messages__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
