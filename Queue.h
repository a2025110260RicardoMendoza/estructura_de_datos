//Ricardo Mendoza
//Fecha: 15/04/2026
#pragma once
#define MAX_SIZE 256 /* capacidad máxima */
typedef char almacen[MAX_SIZE];
using namespace std;

class Queue {
private:

    int cabeza; /* puntero de lectura */
    int cola; /* puntero de escritura */
    int ITEMS; /* número de elementos en la lista */
    int ITEMSIZE; /* tamaño de cada elemento */
    almacen alma; /* el almacen */

public:
    // constructor
    Queue();
    // destructor
    ~Queue();
    // regresa 1 (true) si la lista está vacia
    bool empty();
    // insertar elemento a la lista
    bool put(int d);
    // retirar elemento de la lista
    char get();
    // regresa el n£mero de elementos en lista
    int size();
}; // fin de la clase Queue

