#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

int x, y, codigo;

float np3, np5, np7, precio3 = 3000, precio5 = 5000, precio7 = 7000, subtotal, iva, total;

int main()
{
	cout << "Bienvenido al sistema de compra" << endl;
	char option;
	do
	{
		int x, y;

		cout << "1.- Dar de alta una orden" << endl;
		cout << "2.- Salir del sistema" << endl;
		cout << "Seleccione la opcion: ";
		cin >> x;

		switch (x)
		{
		case 1:
			cout << "1.- Ryzen 3 " << endl;
			cout << "2.- Ryzen 5 " << endl;
			cout << "3.- Ryzen 7 " << endl;
			cout << "4.- Salir del sistema" << endl;
			cout << "Seleccione un producto: ";
			cin >> y;
			break;

		case 2:
			cout << "Gracias por comprar con nosotros" << endl;
			return 0;
			break;
		}
		switch (y) {
		case 1:
			cout << "El producto a comprar es Ryzen 3" << endl;
			cout << "Ingrese la cantidad que desea comprar (maximo 10 por cliente) ";
			cin >> np3;
			if (np3 <= 10)
			{
				cout << "El precio por objeto es de: " << precio3 << endl;
				subtotal = (precio3 * np3);
				cout << "El precio por la cantidad de producto es de: " << subtotal << endl;
				codigo = 3 + rand() % 300;
				cout << "El codigo de su producto es: " << codigo << endl;
				iva = subtotal * 0.16;
				total = subtotal + iva;
				cout << "El costo total del producto con iva es de: " << total << endl;
				cout << " " << endl;
				break;
			}
			else(np3 >= 11);
			{
				cout << "Maximo 10 por cliente" << endl;
				return main();
			}
			break;

		case 2: cout << "El producto a comprar es Ryzen 5" << endl;
			cout << "Ingrese la cantidad que desea comprar (maximo 5 por cliente) ";
			cin >> np5;
			if (np5 <= 5)
			{
				cout << "El precio por objeto es de: " << precio5 << endl;
				subtotal = (precio5 * np5);
				cout << "El precio por la cantidad de producto es de: " << subtotal << endl;
				codigo = 5 + rand() % 500;
				cout << "El codigo de su producto es: " << codigo << endl;
				iva = subtotal * 0.16;
				total = subtotal + iva;
				cout << "El costo total del producto con iva es de: " << total << endl;
				cout << " " << endl;
				break;
			}
			else (np5 >= 6);
			{
				cout << "Maximo 5 por cliente" << endl;
				return main();
			}
			break;

		case 3:
			cout << "El producto a comprar es Ryzen 7" << endl;
			cout << "Ingrese la cantidad que desea comprar (maximo 10 por cliente) ";
			cin >> np7;
			if (np7 <= 10)
			{
				cout << "El precio por objeto es de" << precio7 << endl;
				subtotal = (precio7 * np7);
				cout << "El precio por la cantidad de producto es de " << subtotal << endl;
				codigo = 7 + rand() % 700;
				cout << "El codigo de su producto es " << codigo << endl;
				iva = subtotal * 0.16;
				total = subtotal + iva;
				cout << "El costo total del producto con iva es de: " << total << endl;
				cout << " " << endl;
				break;
			}
			else (np7 >= 4);
			{
				cout << "Maximo 3 por cliente" << endl;
				return main();
			}
			break;
		case 4:
			cout << "Regresando al menu principal" << endl;
			return main();
			break;
		}
	} while (x != 2);
	system("PAUSE");
	return 0;
}