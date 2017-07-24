# learnopengl - In pure C


## Installation

Linux:

```
git clone --recursive https://github.com/ranguli/learnopengl
cd ./learnopengl

wget https://github.com/glfw/glfw/archive/3.2.1.tar.gz
tar -xvf 3.2.1.tar.gz
cd ../glfw
cmake .
make
sudo make install

```

Some note-to-self reading on on the Linking process (Including static vs. dynamic linking) [here](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html), [here](https://gcc.gnu.org/onlinedocs/gcc/Link-Options.html), [here](https://stackoverflow.com/questions/15441877/how-do-i-link-object-files-in-c-fails-with-undefined-symbols-for-architecture) and [here](https://stackoverflow.com/questions/1993390/static-linking-vs-dynamic-linking)
## Dependencies

### Ubuntu & Debian ###

```sh
 sudo apt-get install build-essential libxmu-dev libxi-dev libgl-dev libosmesa-dev cmake xorg-dev dtrx
```

 _(This README was forked from: https://github.com/ranguli/readme-template)_
 
 
<!-- Markdown link & img dfn's -->
[npm-image]: https://img.shields.io/npm/v/datadog-metrics.svg?style=flat-square
[npm-url]: https://npmjs.org/package/datadog-metrics
[npm-downloads]: https://img.shields.io/npm/dm/datadog-metrics.svg?style=flat-square
[travis-image]: https://img.shields.io/travis/dbader/node-datadog-metrics/master.svg?style=flat-square
[travis-url]: https://travis-ci.org/dbader/node-datadog-metrics
[wiki]: https://github.com/yourname/yourproject/wiki
