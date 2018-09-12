cmake_minimum_required(VERSION 2.8.11)
project(test_vec2d)

set(source_files
  main.cpp
  vec2d.cpp
)

add_executable (${PROJECT_NAME} ${source_files})
target_link_libraries(${PROJECT_NAME})

