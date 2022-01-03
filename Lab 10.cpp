#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include <Windows.h>

using namespace std;

int x;

void gotoxy(int x, int y) {
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}

struct nombre
{
	char name[50];
};

int main()
{
	nombre nombre[5];

	for (int i = 0; i < 5; i++) {
		cout << "Ingrese un nombre: ";
		cin >> nombre[i].name;
	}
	system("CLS");
	for (int j = 0; j < 5; j++) {
		gotoxy(0, j);
		printf("Nombre");
		cout << "..........................................................................";
		x = strlen(nombre[j].name);
		gotoxy(80 - x, j);
		cout << nombre[j].name << endl;
	}
}