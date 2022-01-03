#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <cstdlib>
#include <conio.h>
#include <fstream>

using namespace std;
int x, y, z;
void salir();

struct compra
{
	int codigo;
	float cost;
	int np;
	char nom[100];
	float subtotal;
	float total;
	float iva;
};

int main()
{
	cout << "Bienvenido al sistema de compra" << endl;
	cout << "MAXIMO 3 COMPRAS POR CLIENTE" << endl;
	cout << "1.- Dar de alta una orden" << endl;
	cout << "2.- Salir del sistema" << endl;
	cout << "Seleccione la opcion: ";
	cin >> x;
	
	switch (x)
	{
	case 1:
		compra st[3];
		for (int i = 0; i < 3; i++)
		{
			st[i].codigo = 2000 + rand() % 100000;
			cout << "Ingresa el nombre del articulo: "; cin >> st[i].nom;

			cout << "Ingresa la cantidad de productos que va a ordenar: "; cin >> st[i].np;

			cout << "Ingrese el precio del producto: "; cin >> st[i].cost;

			st[i].subtotal = st[i].np * st[i].cost;

			st[i].iva = st[i].subtotal * (float)0.16;

			st[i].total = st[i].subtotal + st[i].iva;
			cout << "Si desea imprimir la lista de orden presione 1, si desea salir del sistema presione 2: ";
			cin >> y;
			cout << endl;
			if (y == 1)
			{
				cout << "La lista de la orden #" << i + 1 << " es:" << endl << endl;

				cout << "El articulo selecionado es " << st[i].nom << " #" << st[i].codigo << endl;
				cout << "Subtotal: " << st[i].subtotal << endl;
				cout << "Con el IVA del 16%: " << st[i].iva << endl;
				cout << "Total: " << st[i].total << endl;
				cout << endl;

				cout << "Si desea orenar algo mas presione 1, si se quiere salir del sistema presione 2: ";
				cin >> z;
				cout << endl;
				if (z == 2)
				{
					salir();
				}
			}
			else
			{
				salir();
			}
		}
		cout << "Limite de compras por cliente" << endl;

	case 2:
		salir();
	}
}

void salir()
{
	cout << endl;
	cout << " \t Programa terminado" << endl;
	exit(0);
}