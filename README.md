**DATABASE

Trabajar con la base de datos de éste proyecto requiere:

Sqlite3 -> Database library
    sudo apt-get install sqlite3
    sqlite3 –version

Sqlite browser  -> Optional a graphic database interface 
    sudo apt-get install sqlitebrowser


Libsqlite3-dev ->  library to link sqlite3 with c++
    sudo apt install libsqlite3-dev

**COMPILAR

Tener instaldo cmake min version 3.16.3. Si no lo tienes: sudo apt update sudo apt install cmake cmake –version -> checar que la version al menos sea 3.16.3

correr script build.sh dentro del folder raiz del proyecto (:~/proyecto_inventario$) ./build.sh
