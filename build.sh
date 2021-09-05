#!/bin/dash
# crear un folder para build if it doesnt exist
DIR="./build"
if [ -d "$DIR" ]; then
  echo " build folder exists ok"
else
echo " creating build folder"
echo " build folder exists ok"
mkdir build/
fi
#entrar al folder
cd build
#correr cmake para crear el makefile ahi. son dos puntos porque el  
# CMakeLists.txt de configuración está en el folder raiz del codigo
cmake ..
#llamar al makefile para compilar y crear el ejecutable en el folder build
make

