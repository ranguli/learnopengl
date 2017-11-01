cmake_minimum_required(VERSION 3.5)
project (learnopengl)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_subdirectory(dependencies/glfw)
add_subdirectory(dependencies/glad)
add_subdirectory(dependencies/lua)

set(common_include_dirs
	${PROJECT_SOURCE_DIR}/dependencies/glfw/include
	${PROJECT_SOURCE_DIR}/dependencies/lua
	)

include_directories(common_include_dirs)

add_executable(learnopengl helloworld.c)
target_link_libraries(learnopengl glad glfw lua-static)

