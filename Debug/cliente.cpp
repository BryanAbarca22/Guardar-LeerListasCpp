
#include "cliente.h";

cliente::cliente() {
	nombre = "No identificado";
	edad = 0;
	sexo = 'I';
	categoria = 0;
}

cliente::cliente(string nom, int ed, char sx, int tb) {
	nombre = nom;
	edad = ed;
	sexo = sx;
	categoria = tb;
}
void cliente::setNombre(string nom) { nombre = nom; }
void cliente::setEdad(int ed) { edad = ed; }
void cliente::setSexo(char sx) { sexo = sx; }
void cliente::setCategoria(int tb) { categoria = tb; }
string cliente::getNombre() { return nombre; }
int cliente::getEdad() { return edad; }
char cliente::getSexo() { return sexo; }
int cliente::getCategoria() { return categoria; }
cliente::~cliente() {}
string cliente::toString() {
	stringstream s;
	s << "------------cliente--------------" << endl
		<< "Nombre....= " << getNombre() << endl
		<< "Edad......= " << getEdad() << endl
		<< "Sexo......= " << getSexo() << endl
		<< "Categoria = " << getCategoria() << endl << endl;
	return s.str();
}

void cliente::autoGuardar(ofstream& estFile) {
	cout << "    <<Guardando>>" << endl;
	cout << toString() << endl;
	estFile << nombre  << endl
		    << edad << endl
	        << sexo << endl
			<< categoria << endl;

}

cliente*  cliente::autoLeer(ifstream& estFile) {

	string nom;
	int ed, tb; 
	char sx;
	if (!(estFile >> nom)) { return NULL; }
	if (!(estFile >> ed)) { return NULL; }
	if (!(estFile >> sx)) { return NULL; }
	if (!(estFile >> tb)){ return NULL; }
	cout << "   --Cargando registro" << endl;
	return new cliente(nom, ed, sx, tb);

}











