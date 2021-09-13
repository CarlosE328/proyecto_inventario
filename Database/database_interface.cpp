#include <iostream>
#include <stdio.h>
#include<sqlite3.h>

// function declarations
static int createDB(const char* s);
static int createTable(const char* s);


// function definitions
static int createDB(const char* s)
{
    //Database declaration
    sqlite3* DB;
    int result =0;
    result = sqlite3_open(s, &DB);
    sqlite3_close(DB);
    return 0;
}

static int createTable(const char* s)
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


int main()
{
    const char* dir ="./stock.db";

    createDB(dir);
    createTable(dir);

    return 0; 

}
