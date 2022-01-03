#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
	double x1, x2, y1, y2, dis, pi = 3.14159265, ang, b, pend;

	cout << "Dame el valor de x1: "; cin >> x1;
	cout << "Dame el valor de y1: "; cin >> y1;
	cout << "Dame el valor de x2: "; cin >> x2;
	cout << "Dame el valor de y2: "; cin >> y2;

	pend = (y2 - y1) / (x2 - x1);
	dis = abs(sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)));
	ang = atan(pend) * 180 / pi;
	b = y1 - (pend * x1);

	cout << "Los valores del primer punto son ( " << x1 << " , " << y1 << " )" << endl;
	cout << "Los valores del segundo punto son ( " << x2 << " , " << y2 << " )" << endl;
	cout << "El distancia entre ellos es de " << dis << endl;
	cout << "El valor de la pendiente es " << pend << endl;
	cout << "El angulo formado por la recta con el eje x es de " << ang << " grados" << endl;
	cout << "La ecuacion de la recta es de y = " << pend << "x + " << b << endl;

	system("PAUSE");
}