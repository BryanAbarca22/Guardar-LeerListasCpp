#include "cliente.h"

class nodo;

class lista
{
private:
	nodo *primero;
	nodo * actual;
public:
	lista();
	void insertarInicio(cliente*);
	bool eliminaInicio();
	string toString();
	int cuentaNodos();
	bool listaVacia(); 
	~lista();
}; 


class nodo
{
private:
	cliente*  info;
	nodo * sig;
public:
	nodo(cliente*, nodo*);
	~nodo();
	void setInfo(cliente*);
	cliente* getInfo();
	void setSig(nodo*);
	nodo* getSig();
	string toStringNodo();
};
