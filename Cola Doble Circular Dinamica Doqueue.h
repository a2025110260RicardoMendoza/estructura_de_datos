#pragma once
#include <iostream>
#include <string>
#include <conio.h>
#include "Nodo.h"

using namespace std;

typedef char DATA_TYPE;

class Doqueue
{
private:
    Nodo* cabeza;  // Apunta al primer nodo
    Nodo* cola;    // Apunta al último nodo
    int items;     // Cantidad de elementos

public:
    // Constructor
    Doqueue(); 

    // Destructor: elimina todos los nodos
    ~Doqueue();

    // Agregar un dato al final
    void put_back(DATA_TYPE valor);

    // Agregar un dato al inicio
    void put_front(DATA_TYPE valor);

    // Eliminar y devolver el dato del inicio
    DATA_TYPE get_front();

    // Eliminar y devolver el dato del final
    DATA_TYPE get_back();

    // Verifica si la cola está vacía
    bool empty();
    // Muestra todos los elementos de la cola
    void mostrar();
};

