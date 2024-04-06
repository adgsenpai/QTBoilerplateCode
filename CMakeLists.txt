cmake_minimum_required(VERSION 3.10)

# Project name and version
project(MyQtProject VERSION 1.0)

# Find the Qt package for the Widgets module
set(Qt5_DIR "C:/Qt/Qt5.12.12/5.12.12/msvc2017_64/lib/cmake/Qt5")


# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
find_package(Qt5 COMPONENTS Widgets REQUIRED)
add_executable(MyQtApp main.cpp)
target_link_libraries(MyQtApp Qt5::Widgets)