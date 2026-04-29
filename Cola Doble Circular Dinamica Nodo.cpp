#include "Nodo.h"
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

typedef char DATA_TYPE;


Nodo::Nodo(DATA_TYPE valor) : data(valor), next(nullptr), prev(nullptr) {}
