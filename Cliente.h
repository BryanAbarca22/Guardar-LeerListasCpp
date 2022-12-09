#ifndef CLIENTE_H
#define CLIENTE_H
#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
using namespace std;

class Cliente {
private:
	string nombre;
	int edad;
	char sexo;
	int categoria;
public:
	Cliente();
	Cliente(string, int, char, int);
	~Cliente();
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
	static Cliente* autoLeer(ifstream&);
};


#endif

