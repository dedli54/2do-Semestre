#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>

using namespace std;

int opcion, subt, z;

int total();

struct pedido {
	int code;
	char art[20];
	int cant;
	double cost;
}reg[3];

int main() {
	cout << "Ingrese el numero 1 para dar de alta las ordenes" << endl;
	cout << "ingrese el numero 2 para salir del programa " << endl;
	cin >> opcion;
	cout << " " << endl;
	switch (opcion) {
	case 1:
		system("CLS");
		for (int i = 0; i < 3; i++) {
			cout << "ingresa el codigo del producto." << endl;
			cin >> reg[i].code;
			cout << "ingresa el nombre del producto" << endl;
			cin.ignore();
			cin.getline(reg[i].art, 20);
			cout << "ingresa la cantidad a solicitar del producto" << endl;
			cin >> reg[i].cant;
			cout << "ingresa el precio del producto" << endl;
			cin >> reg[i].cost;
			cout << " " << endl;
			cout << "Orden ingresada con exito." << endl;
			cout << " " << endl;
			system("PAUSE");
			system("CLS");
		}
		cout << "Lista de ordenes : " << endl;
		for (int j = 0; j < 3; j++) {
			cout << "Codigo de producto : " << reg[j].code << " " << endl;
			cout << "Nombre de articulo : " << reg[j].art << " " << endl;
			cout << "Cantidad de articulos : " << reg[j].cant << " " << endl;
			cout << "Costo del producto : " << reg[j].cost << " " << endl;
			subt = reg[j].cost * reg[j].cant;
			cout << "Subtotal : " << subt << endl;
			cout << "Total : " << total() + subt << endl;

			cout << " " << endl;
			cout << "Fin de orden." << endl;
			cout << " " << endl;
		}
		system("PAUSE");
		system("CLS");
		cout << "Si desea volver al menu de opciones ingrese el numero 1, de lo contrario para salir del programa ingrese 0." << endl;
		cin >> z;
		if (z == 1) {
			system("CLS");
			return main();
		}
		else {
			cout << "Programa finalizado." << endl;
			exit(EXIT_SUCCESS);
		}
		return main();
	case 2:cout << "Programa finalizado." << endl;
		break;
	}//switch
}//main

int total() {
	double iva;
	iva = .16;
	return iva * subt;
}


