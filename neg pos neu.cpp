#include <iostream>
#include <math.h>

using namespace std;
int x;
int main() {

	cout << "Dame un numero entero" << endl;
	cin >> x;

	if (x == 0)
	{
		cout << "Tu numero es neutro" << endl;
	}
	
	else if (x > 0)
	{
		cout << "Tu numero es positivo" << endl;
	}

	else 
	{
	cout << "Tu numero es negativo" << endl;
	}
	
system("PAUSE");

}