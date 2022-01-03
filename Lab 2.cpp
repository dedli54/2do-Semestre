#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char* argv[])
{
	int x, y, z, op;

	cout << "Introduzca un numero : ";
	cin >> x;

	if (x % 2 == 0)
	{
		cout << "El numero es par y ";
	}

	else
	{
		cout << "El numero es impar y ";
	}

	if (x == 0)
	{
		cout << "tu numero es neutro" << endl;
	}

	else if (x > 0)
	{
		cout << "tu numero es positivo" << endl;
	}

	else
	{
		cout << "tu numero es negativo" << endl;
	}

	cout << "Seleccione la opcion:" << endl;
	cout << "1.- Incrementar el valor en 2" << endl;
	cout << "2.- Incrementar el valor en 8" << endl;
	cout << "3.- Incrementar el valor en 14" << endl;
	cin >> op;

	switch (op)
	{
	case 1:
		y = x + 2;
		cout << "El valor es " << y << endl;
		break;
	case 2:
		y = x + 8;
		cout << "El valor es " << y << endl;
		break;
	case 3:
		y = x + 14;
		cout << "El valor es " << y << endl;
		break;
	}
	system("PAUSE");
}