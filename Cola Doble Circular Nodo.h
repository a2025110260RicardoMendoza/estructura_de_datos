#pragma once
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

typedef char DATA_TYPE;

class Nodo
{
public:
    DATA_TYPE data;
    Nodo* next;
    Nodo* prev;
    Nodo(DATA_TYPE valor);
};
