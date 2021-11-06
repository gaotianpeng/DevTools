set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(Boost_USE_STATIC_LIBS        ON)  # only find static libs
set(Boost_USE_DEBUG_LIBS        ON)  # ignore debug libs and
set(Boost_USE_RELEASE_LIBS       ON)  # only find release libs
set(Boost_USE_STATIC_RUNTIME    OFF)
find_package(Boost 1.72.0 COMPONENTS 
    system
    filesystem
    unit_test_framework
    serialization
    REQUIRED)

set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_STATIC_RUNTIME ON) 


set(GTEST_ROOT ${PROJECT_SOURCE_DIR}/third/gtest CACHE PATH "Path to googletest")
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

file(GLOB_RECURSE SRC *.h *.cc *.cpp)

# remove last end of "/"
string(REGEX REPLACE "/$" "" CURRENT_FOLDER_ABSOLUTE ${CMAKE_CURRENT_SOURCE_DIR})

# get current relative dir name and set target name
string(REGEX REPLACE ".*/(.*)" "\\1" CURRENT_FOLDER ${CURRENT_FOLDER_ABSOLUTE})
set(TARGET_NAME ${CURRENT_FOLDER})

add_executable(${TARGET_NAME} ${SRC})
target_link_libraries(${TARGET_NAME} 
    GTest::GTest
    GTest::Main
    ${GTEST_BOTH_LIBRARIES}
    )


if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
endif()

target_link_libraries(${TARGET_NAME} ${Boost_LIBRARIES})

message(STATUS "TEST CASE PATH: " ${CMAKE_CURRENT_SOURCE_DIR})