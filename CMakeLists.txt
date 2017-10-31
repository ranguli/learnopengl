cmake_minimum_required(VERSION 3.5)
project (learnopengl)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_executable(learnopengl
    helloworld.c
)

add_subdirectory(lib/glfw)
add_subdirectory(lib/glad)

find_package(Lua REQUIRED)
if (LUA_FOUND)
    include_directories(${LUA_INCLUDE_DIRS})
    target_link_libraries (learnopengl ${LUA_LIBRARIES})
endif (LUA_FOUND)

target_link_libraries(learnopengl glad)
target_link_libraries(learnopengl glfw)
