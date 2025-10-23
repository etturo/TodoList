cmake_minimum_required(VERSION 4.0)
project(ToDoList)

set(CMAKE_CXX_STANDARD 11)

add_executable(ToDoList main.cpp
        sources/Task.cpp
        includes/Task.h
        sources/UserInterface.cpp
        includes/UserInterface.h)
