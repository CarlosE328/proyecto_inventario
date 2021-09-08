#include<iostream>
<<<<<<< HEAD
#include "Actions/action.hpp"


=======
#include<string>

/*definiciones constantes*/
typedef enum act_inv{
    AGREGAR = 1,
    QUITAR = 2,
    MOSTRAR = 3
}act_inv_t;

typedef enum item{
    PISOS = 1,
    SANITARIOS = 2,
    ACCESORIOS = 3
}item_t;

/*Defininición de estructuras*/
typedef struct{
    item_t tipo;
    double precio;
}producto_t;

/*variables globales*/
static uint action;
static producto_t current;

 /* Declaracion de funciones*/
void add_item();
void remove_item();
void display_all();
void get_item_properties();
void update_inventory(act_inv_t cambio, producto_t item_a_actualizar);


void get_item_properties()
{
    int pro;
    std::cout<<"Escriba 1, 2 o 3 dependiendo cual es el producto: 1)Piso ,  2)Sanitario o 3) accesorio ? \n " <<std::endl;
    std::cin>>pro;

    switch(pro) {
        case 1:
        current.tipo = PISOS;
        current.precio = 20;
        break;
        case 2:
        current.tipo = SANITARIOS;
        current.precio = 20;
        break;
        case 3:
        current.tipo = ACCESORIOS;
        current.precio = 20;
        break;
        default:
        std::cout<< "no valido -> SALIENDO!" <<std::endl;
        break;
    }

}

void update_inventory(act_inv_t cambio_en_inventario, producto_t item_a_actualizar)
{
    std::string th= (item_a_actualizar.tipo ==PISOS) ? " piso\n": ((item_a_actualizar.tipo ==SANITARIOS) ? " sanitario\n": "accesorio\n");
    switch(cambio_en_inventario)
    {
        case AGREGAR:
        std::cout<<"Agregando" << th <<std::endl;
        break;
        case QUITAR:
        std::cout<<"Quitando" <<  th <<std::endl;
        break;
        case MOSTRAR:
        std::cout<<"mostrar todo"<<std::endl;
        default:
        break;
    }
}

/* Definicion de las funciones*/
void add_item()
{
   std::cout<<"Agregar item" <<std::endl;
   get_item_properties();
   update_inventory(AGREGAR, current);
}

void remove_item()
{
    std::cout<<"Remove item" <<std::endl;
    get_item_properties();
    update_inventory(QUITAR, current);
}

void display_all()
{    
    update_inventory(MOSTRAR, current);
}
>>>>>>> master


int main()
{

    std::cout<<" \n****INVENTORY***** \n" <<std::endl;
    act_stub();
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
    case 3:    
    std::cout<< "not a valid option" <<std::endl;
    break;
    case 4: display_all();
    break;
    default:
    std::cout<< "not a valid option" <<std::endl;
    break;
    }
}