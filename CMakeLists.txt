cmake_minimum_required(VERSION 3.15)

project(your-project CXX)
find_package(fmt REQUIRED)
set(CMAKE_CXX_STANDARD 20)

add_executable(hola main.cpp)

target_link_libraries(hola
  PRIVATE
    fmt::fmt)