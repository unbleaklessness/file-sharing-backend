cmake_minimum_required(VERSION 3.0)

set(NAME library)

add_library(${NAME} library.cpp)

target_include_directories(${NAME} PUBLIC "${PROJECT_SOURCE_DIR}/include/${NAME}" PRIVATE "${PROJECT_SOURCE_DIR}/sources/${NAME}")
