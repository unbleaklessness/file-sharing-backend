cmake_minimum_required(VERSION 3.0)

set(NAME application)

add_executable(${NAME} main.cpp)

target_include_directories(${NAME} PRIVATE "${PROJECT_SOURCE_DIR}/include")

target_link_libraries(${NAME} PRIVATE library)
