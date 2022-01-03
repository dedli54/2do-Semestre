#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <cstdlib>
#include <conio.h>

using namespace std;
int x, y, codigo;
float np, cost, subtotal, total, iva;
char nom[100];

int main()
{
	cout << "Bienvenido al sistema de compra" << endl;
	char option;

	int x, y;

	cout << "1.- Dar de alta una orden" << endl;
	cout << "2.- Salir del sistema" << endl;
	cout << "Seleccione la opcion: ";
	cin >> x;

	switch (x)
	{
	case 1:
		codigo = 1 + rand() % 100000;
		cout << "Ingresa el nombre del articulo: "; cin >> nom;
		cout << "Ingresa la cantidad de productos que va a ordenar: "; cin >> np;
		cout << "Ingrese el precio del producto: "; cin >> cost;
		subtotal = np * cost;
		iva = subtotal * 0.16;
		total = subtotal + iva;

		cout << "El articulo selecionado es " << nom << " #" << codigo << endl;
		cout << "Subtotal: " << subtotal << endl;
		cout << "Con el IVA del 16%; " << iva << endl
			;
		cout << "Total: " << total << endl;

		cout << "Para regresar al menu principal ingrese 1, de lo contrario ingrese el numero 2 : ";
		cin >> y;
		if (y == 1)
		{
			return main();
		}
		else
		{
			exit(0);
		}
	case 2: cout << "Programa terminado" << endl;
		break;
	}
}