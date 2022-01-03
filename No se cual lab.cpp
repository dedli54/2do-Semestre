#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	char y;

	int x = 0;

	cout << "Ingrese una vocal: ";

	y = _getch();
	do {
		y = _getch();
		if (y == 97) {
			x = x + 2;
			cout << "El contador va en:" << x << endl;
			cout << "Ingrese una vocal: ";
		}
		if (y == 101) {
			x = x + 1;
			cout << "El contador va en:" << x << endl;
			cout << "Ingrese una vocal: ";
		}
		if (y == 105) {
			x = x + 0;
			cout << "El contador va en:" << x << endl;
			cout << "Ingrese una vocal: ";
		}
		if (y == 111) {
			x = x + 12;
			cout << "El contador va en:" << x << endl;
			cout << "Ingrese una vocal: ";
		}
		if (y == 117) {
			x = x + 10;
			cout << "El contador va en:" << x << endl;
			cout << "Ingrese una vocal: ";
		}

	} while (y != 27);
}

