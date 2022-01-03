#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float a, b = 2, c = 3, d = 4;

	a = b + c / d;
	cout << "La operacion #1 es, a = b + c / d" << endl;
	cout << "Al hacer la operacion 2+3/4 nos da ";
	cout << a;
	cout << ", ya que 3/4 nos da .75 y luego al sumarle 2 nos daria que a = ";
	cout << a << endl;
	cout << "" << endl;


	a = b * c / d;
	cout << "La operacion #2 es, a = b * c / d" << endl;
	cout << "Al multiplicar 2*3 nos da 6 luego se divide entre d este siendo 4 y nos daria el resultado de a = ";
	cout << a << endl;
	cout << "" << endl;


	a = 1.5 * (c / d);
	cout << "La operacion #3 es, a * ( c / d )" << endl;
	cout << "Agarramos el valor de a que nos dio en el problema anterior y lo remplazamos" << endl;
	cout << "En esta operacion tenemos un parentesis, este siendo(3 / 4) que nos daria el resultado de .75 ",
	cout << "luego este resultado lo multiplicamos por a este siendo 1.5 por el resultado anterior y esto nos daria ";
	cout << a << endl;
	cout << "" << endl;


	double e, f = 3.14, g = 12.23;

	e = sqrt(f + g);
	cout << "La operacion #4 es,  e = sqrt(f + g)" << endl;
	cout << "Sumamos lo que esta adentro del paréntesis esto resultando en 15.37 y luego le sacamos raiz cuadrada, esto resultando en ";
	cout << e << endl;
	cout << "" << endl;


	system("PAUSE");
}


