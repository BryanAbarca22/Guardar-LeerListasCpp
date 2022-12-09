#include "Cliente.h"


Cliente::Cliente() {
	nombre = "No identificado";
	edad = 0;
	sexo = 'I';
	categoria = 0;
}

Cliente::Cliente(string nom, int ed, char sx, int tb) {
	nombre = nom;
	edad = ed;
	sexo = sx;
	categoria = tb;
}
void Cliente::setNombre(string nom) { nombre = nom; }
void Cliente::setEdad(int ed) { edad = ed; }
void Cliente::setSexo(char sx) { sexo = sx; }
void Cliente::setCategoria(int tb) { categoria = tb; }
string Cliente::getNombre() { return nombre; }
int Cliente::getEdad() { return edad; }
char Cliente::getSexo() { return sexo; }
int Cliente::getCategoria() { return categoria; }
Cliente::~Cliente() {}
string Cliente::toString() {
	stringstream s;
	s << "------------cliente--------------" << endl
		<< "Nombre....= " << getNombre() << endl
		<< "Edad......= " << getEdad() << endl
		<< "Sexo......= " << getSexo() << endl
		<< "Categoria = " << getCategoria() << endl << endl;
	return s.str();
}

void Cliente::autoGuardar(ofstream& estFile) {
	cout << "    <<Guardando>>" << endl;
	cout << toString() << endl;
	estFile << nombre  << endl
		<< edad << endl
		<< sexo << endl
		<< categoria << endl;
	
}

Cliente*  Cliente::autoLeer(ifstream& estFile) {
	
	string nom;
	int ed, tb; 
	char sx;
	if (!(estFile >> nom)) { return NULL; }
	if (!(estFile >> ed)) { return NULL; }
	if (!(estFile >> sx)) { return NULL; }
	if (!(estFile >> tb)){ return NULL; }
	cout << "   --Cargando registro" << endl;
	return new Cliente(nom, ed, sx, tb);
	
}













