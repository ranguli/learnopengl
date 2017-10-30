cmake_minimum_required(VERSION 3.5)
project (learnopengl)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_subdirectory(lib/glfw)
add_subdirectory(lib/glad)

add_executable(learnopengl
    helloworld.c
)

target_link_libraries(learnopengl glad)
target_link_libraries(learnopengl glfw)
