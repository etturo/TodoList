cmake_minimum_required(VERSION 4.0)
project(ToDoList)

set(CMAKE_CXX_STANDARD 11)

find_package(Curses REQUIRED)

add_executable(ToDoList main.cpp
sources/Task.cpp
includes/Task.h
sources/UserInterface.cpp
includes/UserInterface.h
        sources/TaskHandler.cpp
        includes/TaskHandler.h
)

target_link_libraries(ToDoList PRIVATE
        ${CURSES_LIBRARIES})
