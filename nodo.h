#ifndef NODO_H
#define NODO_H
#include <iostream>
#include "cliente.h"
using namespace std;

class nodo
{
private:
	Cliente*  info;
	nodo * sig;
public:
	nodo(Cliente*, nodo*);
	~nodo();
	void setInfo(Cliente*);
	Cliente* getInfo();
	void setSig(nodo*);
	nodo* getSig();
	string toStringNodo();
};

#endif

