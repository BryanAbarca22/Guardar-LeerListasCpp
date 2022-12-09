#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"
#include <iostream>
class Lista
{
private:
	nodo *primero;
	nodo * actual;
public:
	Lista();
	void insertarInicio(Cliente*);
	bool eliminaInicio();
	string toString();
	int cuentaNodos();
	bool listaVacia(); 
	~Lista();
}; 



#endif

