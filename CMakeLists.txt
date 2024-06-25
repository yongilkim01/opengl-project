cmake_minimum_required(VERSION 3.13)
project(app)

find_package(OpenGL REQUIRED)

add_executable(app 
    src/main.cpp
    src/glad.c
)

target_include_directories(app PRIVATE include)

find_package(glfw3 3.3 REQUIRED)

target_link_libraries(app glfw OpenGL::GL)