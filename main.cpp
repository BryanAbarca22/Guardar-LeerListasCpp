#include "Cliente.h";
#include "lista.h";
int main() {
	ifstream entrada;
	ofstream salida;
	int opcion, edad, categoria;
	int i = 0, can = 0;
	string nombre;
	char sexo;
	Lista* li=NULL;
	cout << endl << "        MENU" << endl;
	cout << "[1] Para guardar en archivos" << endl;
	cout <<"[2] Para leer de archivos y generar lista" << endl;
	cout << "opcion:" ;
	cin >> opcion;
	if (opcion == 1)// guardar
	{
		cout << endl << "Ingrese los datos:" << endl;
		salida.open("clientes.txt", ios::app);
		cout << "Nombre: ";
		cin >> nombre;
		cout << "edad: ";
		cin >> edad;
		cout << "sexo: ";
		cin >> sexo;
		cout << "categoria: ";
		cin >> categoria;
		cout << endl;
		Cliente* clien = new Cliente(nombre, edad, sexo, categoria);
		clien->autoGuardar(salida);
		salida.close();  
		delete clien;
		cout << " ---->Listo...." << endl;
	}

	if (opcion == 2)
	{
	    li = new Lista();
		entrada.open("clientes.txt");
		Cliente* c = NULL;
		while (entrada.good())
		{
			c = Cliente::autoLeer(entrada);
			if (c != NULL) { li->insertarInicio(c); }
		}
		cout << li->toString();
	}
	delete li;
	cin.get();
	cin.get();
	return 0;
}
