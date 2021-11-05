set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(Boost_USE_STATIC_LIBS        ON)  # only find static libs
set(Boost_USE_DEBUG_LIBS        ON)  # ignore debug libs and
set(Boost_USE_RELEASE_LIBS       ON)  # only find release libs
set(Boost_USE_STATIC_RUNTIME    OFF)
find_package(Boost 1.72.0 COMPONENTS system filesystem unit_test_framework REQUIRED)

message (STATUS "INCLUDE " ${Boost_INCLUDE_DIR})
message (STATUS  "LIBARY " ${Boost_LIBRARY_DIR})
message (STATUS  "LIB " ${Boost_LIBRARIES})

set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_STATIC_RUNTIME ON) 

set(PROJECT_SOURCES
main.cpp
test_case.h
test_case.cpp
)

add_executable(test_case ${PROJECT_SOURCES})

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
endif()

target_link_libraries(test_case ${Boost_LIBRARIES})

message(STATUS "TEST CASE PATH: " ${CMAKE_CURRENT_SOURCE_DIR})