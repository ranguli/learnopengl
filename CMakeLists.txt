cmake_minimum_required(VERSION 3.5)
project (learnopengl)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
SET(CMAKE_C_FLAGS_DEBUG "-Wall -Wextra -pedantic" CACHE STRING "" FORCE)

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

