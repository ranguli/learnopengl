mkdir bootstrap
cd ./bootstrap

wget https://www.libsdl.org/release/SDL2-2.0.7.zip
git clone https://github.com/glfw/glfw/
git clone https://github.com/nigels-com/glew/  

cd ./glfw
git checkout tags/3.2.1 #Get a specific version of GLFW
cmake .
make
sudo make install
make clean

cd ../glew
git checkout tags/glew-2.1.0 #Get a specific version of GLEW 
make
sudo make install
make clean

cd ../
unzip ./SDL2-2.0.7.zip
cd ./SDL2-2.0.7
mkdir build
cd build
../configure
make
sudo make install
make clean
