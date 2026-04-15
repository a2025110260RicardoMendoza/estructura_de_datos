//Ricardo Mendoza 
//Fecha: 15/04/2026
#include "Queue.h"
using namespace std;
#define MAX_SIZE 256 /* capacidad máxima */
typedef char almacen[MAX_SIZE];

// constructor
Queue::Queue() {
    cabeza = 0;
    cola = 0;
    ITEMS = 0;
    ITEMSIZE = 1;
}
// destructor
Queue::~Queue() {}
// regresa 1 (true) si la lista está vacia
bool Queue::empty() { return ITEMS == 0; }
// insertar elemento a la lista
bool Queue::put(int d)
{
    if (ITEMS == MAX_SIZE) return false;
    alma[cola] = d;
    cola = (cola + 1) % MAX_SIZE;
    ITEMS++;
    return true;
}
// retirar elemento de la lista
char Queue::get()
{
    if (empty()) return -1;
    char d = alma[cabeza];
    cabeza = (cabeza + 1) % MAX_SIZE;
    ITEMS--;
    return d;
}
// regresa el n£mero de elementos en lista
int Queue::size() { return ITEMS; }

