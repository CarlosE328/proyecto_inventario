cmake_minimum_required(VERSION 3.16.3)

project(inv)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(Actions)

target_link_libraries(${PROJECT_NAME} Actions_lib)