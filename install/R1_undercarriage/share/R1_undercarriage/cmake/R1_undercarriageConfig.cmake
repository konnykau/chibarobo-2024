# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_R1_undercarriage_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED R1_undercarriage_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(R1_undercarriage_FOUND FALSE)
  elseif(NOT R1_undercarriage_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(R1_undercarriage_FOUND FALSE)
  endif()
  return()
endif()
set(_R1_undercarriage_CONFIG_INCLUDED TRUE)

# output package information
if(NOT R1_undercarriage_FIND_QUIETLY)
  message(STATUS "Found R1_undercarriage: 0.0.0 (${R1_undercarriage_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'R1_undercarriage' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${R1_undercarriage_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(R1_undercarriage_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_include_directories-extras.cmake")
foreach(_extra ${_extras})
  include("${R1_undercarriage_DIR}/${_extra}")
endforeach()
