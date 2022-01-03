#include <iostream>
#include <math.h>

using namespace std;

int main() {

	double x, y, res;
	
	cout << "Introduzca el valor de X" << endl;
	cin >> x;
	cout << "Introduzca el valor de Y" << endl;
	cin >> y;
	cout << "El resultado de la operacion es ";

	res = 2 * (pow(x, 2)) * (2 * y) - 10;

	cout << res << endl;



	system("PAUSE");

}