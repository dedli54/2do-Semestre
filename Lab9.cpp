#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

using namespace std;

struct persona
{
	char nombre[50];
};

int main() {
	persona arreglo[5];

	for (int i = 0; i < 5; i++) {

		cout << "Ingrese un nombre: ";
		cin >> arreglo[i].nombre;
	}
	for (int i = 0; i < 5; i++) {
		cout << "Nombre \t\t\t\t" << arreglo[i].nombre << endl;
	}
}