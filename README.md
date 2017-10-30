# learnopengl - In pure C

## Getting Started
This whole template is designed to be the easiest way to start writing OpenGL code. You can begin in just 4 commands!

__1.) Clone:__ ``` git clone --recursive https://github.com/ranguli/learnopengl```

__2.) Navigate:__ ``` cd ./learnopengl```

__3.) Pre-build:__ ``` cmake .```

__4.) Build:__ ```make ```

## Linking libraries
Because this project uses CMake, linking libraries (that also use CMake) gets way easier (sorta.) Basically each library is linked and targeted with two lines in the ```CMakeLists.txt``` file. Even if you don't know how CMake works (I sure don't!) I encourage you to figure out which 2 lines it is - you'll learn something and you might feel like a wimp for not linking with ```gcc``` or ```make``` like a demi-god Unix (like me!)  

### What about my glad.h, glad generator, etc?
Don't sweat it. Because the glad repo itself is linked as a git submodule, as long as you clone the repo _recursively_ then it will put glad into the repo. Because glad uses CMake, we linked to the glad sub-directory in our ```CMakeLists.txt``` file, and now we have no need to manually copy/move/ glad.c, glad.h, or any of the multiple files that Glad requires us to typically mess with. Snazzy, huh?

<!-- One day, when this repo has a proper Makefile we won't have to talk about static vs. dynamic linking. But until that day... Apparently static linking isn't always a great idea, becuase if we link dynamically then we can swap out different versions of libraries without recompiling or changing the code. This could be important if changing the version of a library makes or breaks what we're building. -->

Some note-to-self reading on on the Linking process (Including static vs. dynamic linking) [here](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html), [here](https://gcc.gnu.org/onlinedocs/gcc/Link-Options.html), [here](https://stackoverflow.com/questions/15441877/how-do-i-link-object-files-in-c-fails-with-undefined-symbols-for-architecture), [here](https://hg.libsdl.org/SDL/file/default/docs/README-dynapi.md) and  [here](https://stackoverflow.com/questions/1993390/static-linking-vs-dynamic-linking)

