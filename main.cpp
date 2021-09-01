#include<iostream>

static uint action;

 /* Declaracion de funciones*/
void add_item();
void remove_item();
void display_all();

/* Definicion de las funciones*/
void add_item()
{
   std::cout<<"Agregar item" <<std::endl;
}
void remove_item()
{
    std::cout<<"Remove item" <<std::endl;
}
void display_all()
{
    std::cout<<"Desplegar todos los item" <<std::endl;
}


int main()
{
    std::cout<<" \n****INVENTORY***** \n" <<std::endl;
    std::cout<<"1) Add new item" <<std::endl;
    std::cout<<"2) Remove item" <<std::endl;
    std::cout<<"3) Search item"<<std::endl;
    std::cout<<"4) Display all items"<<std::endl;
    std::cout<< "5)  E X I T " <<std::endl;
    std::cin>>action;

    switch(action) {
    case 1: add_item();
    break;
    case 2: remove_item();
    break;
    case 3: display_all();
    break;
    default:
    std::cout<< "not a valid option" <<std::endl;
    break;
    }


}