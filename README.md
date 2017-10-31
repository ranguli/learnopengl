# learnopengl

## Getting Started
This whole template is designed to be the _easiest_ way to start writing OpenGL code. You can begin in _three commands!_ Tell me about it.

__1.) Clone:__ ``` git clone --recursive https://github.com/ranguli/learnopengl```

__2.) Pre-build:__ ``` cd ./learnopengl && cmake .```

__3.) Build:__ ```make ```

## Dependencies
__General:__ ```git```, ```make```, ```gcc```, and ```cmake``` are required and are easy to find yourself in your package manager.

### Ubuntu
```xorg-dev```

### Fedora
 ```libXrandr-devel``` (We can add actually add [libXrandr](https://anongit.freedesktop.org/git/xorg/lib/libXrandr.git/) as a Git submodule and compile it automatically via CMake!)
 ```libXinerama-devel```(We can do this too!)



## Linking libraries
Because this project uses CMake, linking libraries (that also use CMake) gets way easier (sorta.) Basically each library is linked and targeted with two lines in the ```CMakeLists.txt``` file. Even if you don't know how CMake works (I sure don't!) I encourage you to figure out which 2 lines it is - you'll learn something and you might feel like a wimp for not linking with ```gcc``` or ```make``` like a demi-god Unix (like me!)  

### What about my glad.h, glad generator, etc?
Don't sweat it. Because the glad repo itself is linked as a git submodule, as long as you clone the repo _recursively_ then it will put glad into the repo. Because glad uses CMake, we linked to the glad sub-directory in our ```CMakeLists.txt``` file, and now we have no need to manually copy/move/ glad.c, glad.h, or any of the multiple files that Glad requires us to typically mess with. Snazzy, huh?

## Caveats
Right now it just supports GLFW and Glad. That's because linking libraries that don't use CMake isn't as easy as the CMake-ones. So we'll get there! 


If you're a little dissapointed that you didn't earn some chest hair by learning _THE UNIX WAY_ then read up on the Linking process (Including static vs. dynamic linking) [here](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html), [here](https://gcc.gnu.org/onlinedocs/gcc/Link-Options.html), [here](https://stackoverflow.com/questions/15441877/how-do-i-link-object-files-in-c-fails-with-undefined-symbols-for-architecture), [here](https://hg.libsdl.org/SDL/file/default/docs/README-dynapi.md) and  [here](https://stackoverflow.com/questions/1993390/static-linking-vs-dynamic-linking)

