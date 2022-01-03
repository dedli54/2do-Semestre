#include <iostream>
#include <stdlib.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char** argv) {



	float n1, n2, n3, mayor, menor;



	cout << "Ingresar tres numeros distintos:" << endl;

	cout << "Ingrese un numero: "; cin >> n1;

	cout << "Ingrese un numero: "; cin >> n2;

	cout << "Ingrese un numero: "; cin >> n3;



	if (n1 == n2 || n1 == n3 || n2 == n3) {

		cout << "Hay numeros iguales\nIngresar numeros distintos";

	}

	else {

		if (n1 > n2 && n2 > n3) { mayor = n1; menor = n3; }

		if (n1 > n3 && n3 > n2) { mayor = n1; menor = n2; }

		if (n2 > n3 && n3 > n1) { mayor = n2; menor = n1; }

		if (n2 > n1 && n1 > n3) { mayor = n2; menor = n3; }

		if (n3 > n2 && n2 > n1) { mayor = n3; menor = n1; }

		if (n3 > n1 && n1 > n2) { mayor = n3; menor = n2; }



		cout << "El mayor es: " << mayor << endl;

		cout << "El menor es: " << menor;

	}



	system("PAUSE>NULL");

	return 0;
}