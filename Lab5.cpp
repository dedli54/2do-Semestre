#include <iostream>
#include <math.h>

using namespace std;

int  a, b;

int main()
{
	cout << "Programa #1" << endl;

	for (a = 1; a <= 10; a++)
	{
		cout << "Ingrese 10 numeros entre el 1 y el 20" << endl;
		cin >> b;
		if (!((b <= 20) && (b >= 1)))
		{
			cout << "Error, ingresa un numero entre el 1 y el 20" << endl;
		}
		else
		{
			cout << "";
		}
	}
	system("PAUSE");
}