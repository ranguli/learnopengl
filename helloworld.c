#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <stdio.h>
#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"

int main(void) {
    //A hello world example with embedded Lua
    int status, result, i;
    double sum;
    lua_State *L = luaL_newstate();
    luaL_openlibs(L); /* Load Lua libraries */
    luaL_dostring(L, "print\"Please print me!\"");
    lua_close(L);   /* Cya, Lua */

    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* window = glfwCreateWindow(800, 600, "LearnOpenGL", NULL, NULL);
    if (window == NULL) {
        printf("Failed to create GLFW window\n");
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);

    gladLoadGL();

    //glViewport(0, 0, 800, 300);

    char c;
    scanf("%c", &c);
   
    return 0;
}
