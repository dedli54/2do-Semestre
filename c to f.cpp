#include <iostream>
#include <math.h>
using namespace std;

int C, F,opt, conv;

int main()
{

	cout << "1.- Convertir Celsius a Fahrenheit" << endl;
	cout << "2.- Convertir Fahrenheit a Celsius" << endl;
	cout << "3.- Salir" << endl;
	cout << "Elige una opcion: ";
	cin >> opt;

	switch (opt) {
	case 1: cout << "Ingresa la temperatura que desea convertir: ";
		cin >> C;
		conv = (C*9/5)+32 ;
		cout << conv << "F" << endl;
		if (conv >= 100)
		{
			cout <<"Hace mucho calor" << endl;
		}
		break;

	case 2: cout << "Ingresa la temperatura que desea convertir: ";
		cin >> F;
		conv = (F - 32) * 5 / 9;
		cout << conv << "C" << endl;
		if (conv >= 35)
		{
			cout << "Hace mucho calor" << endl;
		}
		break;
	case 3:
		exit(0);
	}
}