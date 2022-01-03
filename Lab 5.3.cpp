#include <math.h>
#include <iostream>

using namespace std;

int x, y, z;

int main()
{
	cout << "Programa #3" << endl;
	cout << "Ingrese el numero para obtener su tabla de 10: ";
	cin >> x;
	while (y <= 10)
	{
		z = x * y;
		cout << x << " * " << y << " = " << z << endl;
		y++;
	}
	system("PAUSE>NULL");

	return 0;
}