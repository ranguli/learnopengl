# learnopengl - In pure C


## Dependencies
All depedencies are fetched and compiled with the bootstrap script. If you already have these things installed, prefer to use different versions of these things, etc, probably don't run the bootstrap script.

- SDL2
- GLFW
- GLEW

## Linking libraries
One day, when this repo has a proper Makefile we won't have to talk about static vs. dynamic linking. But until that day... Apparently static linking isn't always a great idea, becuase if we link dynamically then we can swap out different versions of libraries without recompiling or changing the code. This could be important if changing the version of a library makes or breaks what we're building. 

Some note-to-self reading on on the Linking process (Including static vs. dynamic linking) [here](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html), [here](https://gcc.gnu.org/onlinedocs/gcc/Link-Options.html), [here](https://stackoverflow.com/questions/15441877/how-do-i-link-object-files-in-c-fails-with-undefined-symbols-for-architecture), [here](https://hg.libsdl.org/SDL/file/default/docs/README-dynapi.md) and  [here](https://stackoverflow.com/questions/1993390/static-linking-vs-dynamic-linking)
## Dependencies
