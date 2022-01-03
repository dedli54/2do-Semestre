#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	int x, y, z, mayor, menor, medio;

	cout << "Programa #2 " << endl;
	cout << "Dame 3 numeros: " << endl;
	cin >> x;
	cin >> y;
	cin >> z;

	if (x == y || y == z || z == x)
	{
		cout << "Favor de no meter numeros iguales" << endl;
	}
	else
		if (x > y && y > z)
		{
			mayor = x;
			menor = z;
			medio = y;
		}
	if (x > z && z > y)
	{
		mayor = x;
		menor = y;
	}
	if (y > x && x > z)
	{
		mayor = y;
		menor = z;
		medio = x;
	}
	if (y > z && z > x)
	{
		mayor = y;
		menor = x;
		medio = z;
	}
	if (z > x && x > y)
	{
		mayor = z;
		menor = y;
		medio = x;
	}
	if (z > y && y > x)
	{
		mayor = z;
		menor = x;
		medio = y;
	}

	cout << "El numero mayor es: " << mayor << endl;
	cout << "El numero menor es: " << menor << endl;
	cout << "El numero de en medio es: " << medio << endl;

	system("PAUSE>NULL");

	return 0;
}