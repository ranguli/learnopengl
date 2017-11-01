project(lua)

cmake_minimum_required(VERSION 2.8)

aux_source_directory(. SRC_LIST)
list(REMOVE_ITEM SRC_LIST "./lua.c" "./luac.c")

add_library(lua-static STATIC ${SRC_LIST})
