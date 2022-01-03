#include <iostream>
#include <math.h>

using namespace std;

int h1, h2, h3, h4;
float sueldo, SB = 20;

int main()
{
	cout << "Ingrese el numero de horas trabajadas en el horario de 8:00am - 4:00pm: ";
	cin >> h1;
	if (h1 <= 8)
	{
		cout << "Ingrese el numero de horas trabajadas en el horario de 4:00pm - 8:00pm: ";
		cin >> h2;
		if (h2 <= 4)
		{
			cout << "Ingrese el numero de horas trabajadas  en el horario de 8:00pm - 12:00am: ";
			cin >> h3;
			if (h3 <= 4)
			{
				cout << "Ingrese el numero de horas trabajadas  en el horario de 12:00am - 8:00am: ";
				cin >> h4;

				if (h4 <= 8)
				{
					sueldo = ((h1 * SB) + (h2 * (SB * 1.25)) + (h3 * (SB * 1.5)) + (h4 * (SB * 2)));
					cout << "Su sueldo es de : " << sueldo;
				}
				else
				{
					cout << "Favor de ingresar las horas correctamente" << endl;
				}
			}
			else
			{
				cout << "Favor de ingresar las horas correctamente" << endl;
			}
		}
		else
		{
			cout << "Favor de ingresar las horas correctamente" << endl;
		}
	}
	else
	{
		cout << "Favor de ingresar las horas correctamente" << endl;
	}
	return 0;
}