cmake_minimum_required(VERSION 3.15)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_PREFIX_PATH $ENV{QTDIR})

find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
)

qt5_wrap_ui(UIS main_win.ui)

add_executable(DevTools WIN32 ${PROJECT_SOURCES}  ${UIS})
target_link_libraries(DevTools PRIVATE Qt5::Widgets)