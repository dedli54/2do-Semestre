#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
using std::cout;
using std::endl;

struct info {
	char nombre[100];
	char apellido[100];
};

int main() {
	info persona[5];
	for (int i = 0; i < 5; i++) {
		cout << "Escriba el Nombre " << i + 1 << ": ";
		cin >> persona[i].nombre;

		cout << "\nEscriba el Apellido " << i + 1 << ": ";
		cin >> persona[i].apellido;
		cout << endl;
	}

	cout << "Las personas con el mismo apellido son: \n\n";
	for (int i = 0; i < 5; i++)
	{
		if (strcmp(persona[i].apellido, persona[i + 1].apellido) == 0)
		{
			cout << "\t" << persona[i].apellido << endl;
		}
	}

	cout << "El registro de personas que se introdujeron es: \n\n";

	for (int i = 0; i < 5; i++) {
		strcat_s(persona[i].nombre, persona[i].apellido);
		cout << "\t" << persona[i].nombre << " " << i + 1 << "\n";
	}

	return 0;
}