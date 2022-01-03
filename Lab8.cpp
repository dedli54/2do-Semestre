#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <string.h>

using namespace std;

struct circulo {
	float y;
	float x;
	float r;
	float resultado;
};

int main() {
	circulo radio[5];
	int temp, e, l;
	for (int i = 0; i < 5; i++) {
		cout << "Ingrese X " << i + 1 << ":";
		cin >> radio[i].x;

		cout << "Ingrese Y " << i + 1 << ":";
		cin >> radio[i].y;

		cout << "Ingrese el radio " << i + 1 << ":";
		cin >> radio[i].r;
		cout << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << "El resultado de el circulo " << i + 1 << ":";
		radio[i].resultado = (radio[i].x + radio[i].y) * radio[i].r;
		cout << "\t" << radio[i].resultado << "\n";
	}
	temp = radio[0].resultado;
	for (int i = 1; i < 5; i++)
	{
		if (temp < radio[i].resultado)
			temp = radio[i].resultado;
		e = radio[i].x;
		l = radio[i].y;
	}
	cout << "El mayor de todos es" << endl;

	return 0;
}