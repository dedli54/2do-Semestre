#include <iostream>

using namespace std;

int main()
{
	int fac, numero = 0, resultado = 1, k = 1;

	cout << "Ingrese el numero factorial: ";
	cin >> fac;

	for (int i = 0; i <= 100; i++)
	{
		numero = numero + i;
	};

	for (int j = 0; j < fac; j++)
	{
		resultado = resultado * k;
		k++;
	};
	cout << "Las sumas del 1 al 100 es de: " << numero << endl;
	cout << "El resultado del factorial es: " << resultado << endl;
	system("PAUSE>null");
}