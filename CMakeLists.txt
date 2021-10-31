cmake_minimum_required(VERSION 3.15)

project(DevTools LANGUAGES CXX)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT test_case)

add_subdirectory(${PROJECT_SOURCE_DIR}/src)

message (STATUS "env variable  " $ENV{BOOST})