set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

set(GTEST_ROOT ${PROJECT_SOURCE_DIR}/third/gtest CACHE PATH "Path to googletest")
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

find_package (glog 0.6.0 REQUIRED PATHS ${PROJECT_SOURCE_DIR}/third/glog)
include_directories(${GLOG_INCLUDE_DIRS})

file(GLOB_RECURSE SRC *.h *.cc *.cpp)

set(EXE_TARGET design_pattern)

add_executable(${EXE_TARGET} ${SRC})
target_link_libraries(${EXE_TARGET}
    GTest::GTest
    GTest::Main
    ${GTEST_BOTH_LIBRARIES}
    glog::glog
    )

gtest_add_tests(TARGET ${EXE_TARGET})