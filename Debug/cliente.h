#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
using namespace std;
class cliente {
private:
	string nombre;
	int edad;
	char sexo;
	int categoria;
public:
	cliente();
	cliente(string, int, char, int);
	~cliente();
	void setNombre(string);
	void setEdad(int);
	void setSexo(char);
	void setCategoria(int);
	string getNombre();
	int getEdad();
	char getSexo();
	int getCategoria();
	string toString();
	void autoGuardar(ofstream&);
	static cliente* autoLeer(ifstream&);
};
