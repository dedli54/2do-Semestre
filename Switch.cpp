#include <iostream>
#include <math.h>
using namespace std;

int M, g, L, opt, conv;

int main()
{
	
	cout << "1.- Convertir metros a centimetros" << endl;
	cout << "2.- Convertir litros a mililitros" << endl;
	cout << "3.- Convertir gramos a kilogramos" << endl;
	cout << "4.- Salir" << endl;
	cout << "Elige una opcion: ";
	cin >> opt;

	switch (opt) {
	case 1: cout << "Ingresa los metros que quiere convertir a centimetros: ";
		cin >> M;
		conv= M * 100;
		cout << conv << "cm";
		break;

	case 2: cout << "Ingresa los litros que quiere convertir a milimetros: ";
		cin >> L;
		conv = L * 1000;
		cout << conv << "L";
		break;

	case 3: cout << "Ingresa los gramos que quiere convertir a kilogramos: ";
		cin >> g;
		conv = g / 1000;
		cout << conv << "Kg";
		break;

	case 4:
		exit(0);
	}
}