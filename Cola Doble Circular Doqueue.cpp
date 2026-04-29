#include "Doqueue.h"
#include <iostream>
#include <string>
#include <conio.h>
#include "Nodo.h"

using namespace std;

typedef char DATA_TYPE;

// Constructor
Doqueue::Doqueue() : cabeza(nullptr), cola(nullptr), items(0) {}

// Destructor: elimina todos los nodos
Doqueue::~Doqueue() {
    while (!empty()) {
        get_front(); // Libera memoria
    }
}

// Agregar un dato al final
void Doqueue::put_back(DATA_TYPE valor) {
    Nodo* temp = new Nodo(valor);
    if (!cabeza) {   // if (cabeza == nullptr)
        cabeza = cola = temp;
    }
    else {
        cola->next = temp;
        temp->prev = cola;
        cola = temp;
    }
    items++;
}

// Agregar un dato al inicio
void Doqueue::put_front(DATA_TYPE valor) {
    Nodo* temp = new Nodo(valor);
    if (!cabeza) {
        cabeza = cola = temp;
    }
    else {
        cabeza->prev = temp;
        temp->next = cabeza;
        cabeza = temp;
    }
    items++;
}

// Eliminar y devolver el dato del inicio
DATA_TYPE Doqueue::get_front() {
    if (empty()) return -1;
    DATA_TYPE valor = cabeza->data;
    Nodo* temp = cabeza;
    cabeza = cabeza->next;

    if (cabeza) cabeza->prev = nullptr;
    else cola = nullptr;

    delete temp;
    items--;
    return valor;
}

// Eliminar y devolver el dato del final
DATA_TYPE Doqueue::get_back() {
    if (empty()) return -1;
    DATA_TYPE valor = cola->data;
    Nodo* temp = cola;
    cola = cola->prev;

    if (cola) cola->next = nullptr;
    else cabeza = nullptr;

    delete temp;
    items--;
    return valor;
}

// Verifica si la cola está vacía
bool Doqueue::empty() {
    return items == 0;
}

// Muestra todos los elementos de la cola
void Doqueue::mostrar()  {
    Nodo* actual = cabeza;
    while (actual) {
        cout << actual->data << " ";
        actual = actual->next;
    }
    cout << endl;
}
