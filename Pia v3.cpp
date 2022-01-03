#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <cstdlib>
#include <conio.h>
#include <fstream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <ctype.h>

using namespace std;
int x, y, numorden = 0, ordnueva = 0, o, borrar, borrar2;
void salir();
bool f = false;


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
	do
	{
		cout << "Bienvenido al sistema de compra" << endl;
		cout << "1.- Dar de alta una orden" << endl;
		cout << "2.- Imprimir orden" << endl;
		cout << "3.- Eliminar una orden" << endl;
		cout << "4.- Salir del sistema" << endl;
		cout << "Seleccione la opcion: ";
		cin >> x;
		switch (x)
		{
		default:
			system("cls");
			cout << "Favor de elegir una opcion valida" << endl;
			system("PAUSE");
			system("cls");
			break;
		case 1:
			system("cls");
			if (numorden == 0)
			{
				cout << "Cuantas ordenes?" << endl;
				cin >> numorden;
				system("cls");
			}
			else
			{
				numorden = numorden + 1;
				ordnueva = 1;
			}
			for (int i = 0; i < numorden; i++)
			{
				if (ordnueva == 1)
				{
					i = numorden - 1;
				}
				string code;
				int a = 1, b = 1;
				while (b == 1)
				{
					while (a == 1)
					{
						cout << "Ingrese el codigo del producto a 5 digitos: "; cin >> code;
						stringstream geek(code);
						int r = 0;
						geek >> r;
						if (code.length() != 5)
						{
							cout << "Favor de ingresar un codigo de 5 digitos" << endl;
							system("PAUSE");
							system("cls");
							a = 1;
						}
						else
						{
							st[i].codigo = r;
							a = 2;
						}
					}
					int e;
					e = st[i].codigo;
					stringstream L;
					L << e;
					string u;
					L >> u; //Codigo a string
					if ((u.length() != 5))
					{
						cout << "Favor de ingresar un codigo de 5 digitos " << endl;
						system("PAUSE");
						system("cls");
						a = 1;
						b = 1;
					}
					else if (f == true)
					{
						o = st[i].codigo;
						for (int j = 0; j < i; j++)
						{
							if (st[i].codigo == st[j].codigo)
							{
								cout << "Favor de meter un codigo que no este en uso." << endl;
								a = 1; b = 1;
								system("PAUSE");
								system("cls");
								break;
							}
							else
							{
								b = 2;
							}
						}
					}
					else
					{
						b = 2;
					}
				}
				cout << "Ingresa el nombre del articulo: ";
				cin.ignore();
				cin.getline(st[i].nom, 100);
				cout << "Ingresa la cantidad de productos que va a ordenar: "; cin >> st[i].np;

				cout << "Ingrese el precio del producto: "; cin >> st[i].cost;

				st[i].subtotal = st[i].np * st[i].cost;

				st[i].iva = st[i].subtotal * (float)0.16;

				st[i].total = st[i].subtotal + st[i].iva;

				cout << "El subtotal es: " << st[i].subtotal << " $" << endl;
				cout << "El iva es: " << st[i].iva << " $" << endl;
				cout << "El total es: " << st[i].total << " $" << endl;
				cout << endl << "\t Orden ingresada con exito.";
				cout << endl;
				f = true;
				system("PAUSE");
				system("cls");
			}
			system("cls");
			return main();
			break;
		case 2:
			system("cls");
			for (int j = 0; j < numorden; j++)
			{
				if (st[j].codigo == 0)
				{
				}
				else
				{
					cout << "La lista de la orden #" << j + 1 << " es:" << endl << endl;
					cout << "El articulo es " << st[j].nom << " #" << st[j].codigo << endl;
					cout << "Subtotal: " << st[j].subtotal << endl;
					cout << "Con el IVA del 16%: " << st[j].iva << endl;
					cout << "Total: " << st[j].total << endl;
					cout << endl;
					cout << "Fin de la orden" << endl << endl;
				}
			}
			system("PAUSE");
			system("cls");
			return main();
			break;
		case 3:
			system("cls");
			cout << "Ingrese el numero de orden que desea eliminar: ";
			cin >> borrar;
			borrar2 = borrar - 1; //0= no encuentra nada
			for (int i = 0; i < numorden; i++)
			{
				if (i == borrar2)
				{
					st[i].codigo = 0;
					cout << "Orden #" << borrar << " ha sido eliminada" << endl;
					break;
				}
			}
			system("PAUSE");
			system("cls");
			return main();
			break;
		case 4:
			salir();
			system("PAUSE");
			system("cls");
			break;
		}
	} while (x < 3);
	system("cls");
	cout << "Favor de elegir una opcion valida" << endl;
	system("PAUSE");
	system("cls");
	return main(); //Como esta controlado el return main es muy dificil que explote el programa
}

void salir()
{
	ofstream FILE("Compra.txt");
	for (int j = 0; j < numorden; j++)
	{
		if (st[j].codigo == 0)
		{
		}
		else
		{
			FILE << "La lista de la orden #" << j + 1 << " es:" << endl << endl;
			FILE << "El articulo seleccionado es " << st[j].nom << " #" << st[j].codigo << endl;
			FILE << "Subtotal: " << st[j].subtotal << endl;
			FILE << "Con el IVA del 16%: " << st[j].iva << endl;
			FILE << "Total: " << st[j].total << endl;
			FILE << endl;
		}
	}
	FILE.close(); //Este fue el cambio que usted me dijo que cambiara
	system("cls");
	cout << endl;
	cout << " \t Programa terminado" << endl;
	system("PAUSE");
	exit(0);
}