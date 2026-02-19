# CMakeLists.txt for a basic Qt GUI application

cmake_minimum_required(VERSION 3.5)
project(MyQtApp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 REQUIRED COMPONENTS Widgets)

add_executable(MyQtApp main.cpp)

target_link_libraries(MyQtApp Qt5::Widgets)