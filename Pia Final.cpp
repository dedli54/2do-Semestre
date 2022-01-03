//Pia Funcional sin terminar lmao 

#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <cstdlib>
#include <conio.h>
#include <fstream>


using namespace std;
int x, y, totorden = 0, numorden;
void salir();
char z;

struct compra
{
	char nom[100];
	int codigo;
	int np;
	float cost;
	float subtotal;
	float iva;
	float total;
	int producto;
}st[100];

int main()
{
	do {

		cout << "Bienvenido al sistema de compra" << endl;
		cout << "1.- Dar de alta una orden" << endl;
		cout << "2.- Imprimir orden" << endl;
		cout << "3.- Salir del sistema" << endl;
		cout << "Seleccione la opcion: ";
		cin >> x;
		system("cls");
		switch (x)
		{
		case 1:
			cout << "Cuantas ordenes?" << endl;
			cin >> numorden;
			totorden += numorden;

			for (int i = 0; i < totorden; i++)
			{
				cout << "Ingresa el nombre del articulo: ";
				cin.ignore();
				cin.getline(st[i].nom, 100);

				// no se puede usar esto lmao st[i].codigo = 10000 + rand() % 99999;

				cout << "Ingrese el codigo del producto: "; cin >> st[i].codigo;

			

				cout << "Ingresa la cantidad de productos que va a ordenar: "; cin >> st[i].np;

				cout << "Ingrese el precio del producto: "; cin >> st[i].cost;

				st[i].subtotal = st[i].np * st[i].cost;

				st[i].iva = st[i].subtotal * (float)0.16;

				st[i].total = st[i].subtotal + st[i].iva;

				cout << "El subtotal es: " << st[i].subtotal << " $" << endl;
				cout << "El iva es: " << st[i].iva << " $" << endl;
				cout << "El total es: " << st[i].total << " $" << endl;
				cout << endl;


			}

			break;
			system("pause");


		case 2:
			for (int j = 0; j < totorden; j++)
			{
				cout << "La lista de la orden #" << j + 1 << " es:" << endl << endl;
				cout << "El articulo seleccionado es " << st[j].nom << " #" << st[j].codigo << endl;
				cout << "Subtotal: " << st[j].subtotal << endl;
				cout << "Con el IVA del 16%: " << st[j].iva << endl;
				cout << "Total: " << st[j].total << endl;
				cout << endl;
			}
			break;

		case 3:


			salir();
		}
		system("PAUSE");
		system("cls");
	} while (x < 3);
	cout << "Favor de elegir una opcion valida";

}

void salir()
{
	ofstream FILE("Compra.txt");
	for (int j = 0; j < totorden; j++)
	{
		FILE << "La lista de la orden #" << j + 1 << " es:" << endl << endl;
		FILE << "El articulo seleccionado es " << st[j].nom << " #" << st[j].codigo << endl;
		FILE << "Subtotal: " << st[j].subtotal << endl;
		FILE << "Con el IVA del 16%: " << st[j].iva << endl;
		FILE << "Total: " << st[j].total << endl;
		FILE << endl;
	}
	cout << endl;
	cout << " \t Programa terminado" << endl;
	exit(0);
}