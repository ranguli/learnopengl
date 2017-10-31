cmake_minimum_required(VERSION 3.5)
project (learnopengl)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_executable(learnopengl
    helloworld.c
)

add_subdirectory(dependencies/glfw)
add_subdirectory(dependencies/glad)
set(LUA_INCLUDE_DIRS "{$CMAKE_SOURCE_DIR}/dependencies/lua")

find_package(Lua)
if (LUA_FOUND)
    include_directories(${LUA_INCLUDE_DIRS})
    target_link_libraries (learnopengl ${LUA_LIBRARIES})
endif (LUA_FOUND)

target_link_libraries(learnopengl glad)
target_link_libraries(learnopengl glfw)
