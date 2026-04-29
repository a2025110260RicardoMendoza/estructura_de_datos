#pragma once
#include "Nodo.h"
#include <iostream>
#include <string>
using namespace std;

class Cola
{
private:
    Nodo* frente;
    Nodo* final;

public:
    Cola(); 

    ~Cola(); 

    // Encola un nuevo elemento
    void encolar(const string& valor); 

    // Desencola y devuelve el valor
    string desencolar(); 

    // ¿La cola está vacía?
    bool estaVacia();

    // Mostrar elementos recorriendo la cola
    void mostrar();

};

