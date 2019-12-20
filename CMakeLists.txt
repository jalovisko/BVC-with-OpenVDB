# Created by Nikita Letov, 18 December 2019.
# Copyright © 2019 Additive Design and Manufacturing Lab, McGill University. All rights reserved.

IF(OPENEXR_BUILD_BOTH_STATIC_SHARED OR ILMBASE_BUILD_BOTH_STATIC_SHARED)
	IF (${CMAKE_VERSION} VERSION_LESS "3.12.0")
		MESSAGE(FATAL_ERROR "CMake 3.12 or newer is required for object library support when building both static and shared libraries")
	ENDIF()
	CMAKE_MINIMUM_REQUIRED(VERSION 3.12)
ELSE()
	CMAKE_MINIMUM_REQUIRED(VERSION 3.10)
ENDIF()

PROJECT(OpenVDB_test)

# SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/..)

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR})

FILE(GLOB SOURCES
	BVC/*.h
    BVC/*.cpp
    main.cpp
)
ADD_EXECUTABLE(OpenVDB_test ${SOURCES})

LIST(APPEND CMAKE_MODULE_PATH "/Users/Nick/openvdb/cmake/")
FIND_PACKAGE(OpenVDB REQUIRED)
TARGET_LINK_LIBRARIES(OpenVDB_test OpenVDB::openvdb)


