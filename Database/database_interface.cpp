#include <iostream>
#include <stdio.h>
#include<sqlite3.h>



// function definitions
int createDB(const char* s)
{
    sqlite3* DB;                   // Pointer to database
    int result =0;                 // variable to store the result of the operation of opening the database
    result = sqlite3_open(s, &DB);  
    sqlite3_close(DB);
    return 0;
}

int createTable(const char* s)
{
    sqlite3* DB;
    std::string sql= "CREATE TABLE IF NOT EXISTS STOCK_TABLE("
    "ID INTEGER PRIMARY KEY AUTOINCREMENT, " 
    "NAME TEXT NOT NULL);";

    try
    {
        int exit =0;
        exit = sqlite3_open(s, &DB);
        char* messageError;
        exit = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messageError);
        if (SQLITE_OK != exit)
        {
           std::cout <<"ERROR create table"<<exit<<std::endl;
           sqlite3_free (messageError);
        }
        else
        {
           std::cout <<"SUCCESS table created"<<std::endl;            
        }
        sqlite3_close(DB);
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}


int insertData(const char* s)
{
    sqlite3* DB;
    char* messageError;
    int exit = sqlite3_open(s, &DB);
    std::string sql ("INSERT INTO STOCK_TABLE(ID, NAME) VALUES(1, 'Piso rojo')");
    exit = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messageError);
    if (SQLITE_OK != exit)
    {
        std::cout <<"ERROR Insert element"<<exit<<std::endl;
        sqlite3_free (messageError);
    }
    else
    {
        std::cout <<"SUCCESS Element new record"<<std::endl;            
    } 
    return 0;
}

