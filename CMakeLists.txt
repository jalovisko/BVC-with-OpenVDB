# SPDX-License-Identifier: BSD-3-Clause
# Copyright Contributors to the OpenEXR Project.

# We require this to get object library link library support and
# combined python 2 + 3 support
if(OPENEXR_BUILD_BOTH_STATIC_SHARED OR ILMBASE_BUILD_BOTH_STATIC_SHARED)
  if (${CMAKE_VERSION} VERSION_LESS "3.12.0")
    message(FATAL_ERROR "CMake 3.12 or newer is required for object library support when building both static and shared libraries")
  endif()
  cmake_minimum_required(VERSION 3.12)
else()
  cmake_minimum_required(VERSION 3.10)
endif()

project(OpenVDB_test)

# SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/..)

include_directories(${PROJECT_SOURCE_DIR})


file(GLOB SOURCES
    BVC/*.h
    BVC/*.cpp
    main.cpp
)
add_executable(OpenVDB_test ${SOURCES})

list(APPEND CMAKE_MODULE_PATH "/Users/Nick/openvdb/cmake/")
find_package(OpenVDB REQUIRED)
target_link_libraries(OpenVDB_test OpenVDB::openvdb)


