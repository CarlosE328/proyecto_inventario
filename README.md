Mi proyecto
 instrucciones para compilar: 

 1. Tener instaldo cmake min version 3.16.3. Si no lo tienes:
  sudo apt update
  sudo apt install cmake
  cmake –version  -> checar que la version al menos sea 3.16.3

 2. SOLO CUANDO ES LA PRIMERA VES QUE SE USA CMAKE EN EL PROYECTO
    dentro del folder del proyecto (/proyecto_inventario)dar el comando:
  cmake .    -> obtiene de CMakeList.txt obtiene  la configuración para CREAR EL MAKEFILE Y EL TARGET

3.  dentro del folder del proyecto (/proyecto_inventario)dar el comando:
  make   ->  CORRE EL MAKEFILE APARA COMPILAR EL PROYECTO


