#include <iostream>
#include <math.h>

using namespace std;

float tri();
void kwat();
double rect(double b, double a);
void circ(float r);

int main() {
	int opc = 0;
	double  b, a, A;
	float r;
	while (opc < 5) {
		system("CLS");
		cout << "\t Elija una opcion" << endl;
		cout << "1) Area de un triangulo " << endl;
		cout << "2) Area de un cuadrado" << endl;
		cout << "3) Area de un rectangulo" << endl;
		cout << "4) Area de circulo";
		
		cin >> opc;
		switch (opc) {
		case 1:
			cout << "Es area del triangulo es: " << tri() << endl;
			system("PAUSE > NULL");
			break;
		case 2:
			kwat();
			system("PAUSE > NULL");
			break;
		case 3:
		
			cout << "Ingrese el base del rectangulo: ";
			cin >> b;
			cout << "Ingrese el altura del rectangulo: ";
			cin >> a;
			cout << "El area del rectangulo es: " << rect(b,a);
			system("PAUSE > NULL");
			break;
		case 4:
			
			cout << "Ingrese el radio del circulo: ";
			cin >> r;
			circ(r);
			system("PAUSE > NULL");
		
		}
	}
}
float tri() 
{
	float h,b;
	cout << "Ingrese la altura del triangulo: ";
	cin >> h;
	cout << "Ingrese la base del triangulo: ";
	cin >> b;
	return ((h*b)/2);
}
void kwat() 
{
	float l;
	cout << "Ingrese la longitud de un lado de su cuadrado: ";
	cin >> l;
	cout << "El area del cuadrado es: " << pow(l, 2);
}
double rect(double a, double b) 
{
	double A;
	return A=a*b;
}
void circ(float r) 
{
	cout << "El area del circulo es: " << 3.141592 * pow(r, 2);
}