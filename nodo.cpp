#include "nodo.h"

////////////////////////////////////////////////////////////
nodo::nodo(Cliente*  e, nodo* s) {
	info = e;
	sig = s;
}
nodo:: ~nodo() {
	cout << "Se ha destruido un Nodo" << endl;
}
void nodo::setInfo(Cliente* e) { info = e; }
Cliente*  nodo::getInfo() { return info; }
void nodo::setSig(nodo* s) { sig = s; }
nodo* nodo::getSig() { return sig; }

string nodo::toStringNodo() {
	return  info->toString();
}


