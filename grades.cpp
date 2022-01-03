#include <iostream>
#include <math.h>

using namespace std;

int x, y, z, res;

int main() {

	cout << "Escribe las 3 calificaciones" << endl;

	cin >> x;
	cin >> y;
	cin >> z;

	res = (x + y + z) / 3;

		if (res < 70)
		{
			cout << "Reprobado" << endl;
		}

		else
		{
			cout << "Aprobado" << endl;
		}
}