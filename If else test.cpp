#include <iostream>
#include <math.h>

using namespace std;

int main() {

	int x, res;

	cout << "Dame un numero: " << endl;

	cin >> x;

	res = x % 2; 
	
		if (res == 1)
		{
			cout << "Tu numero es impar" << endl;
		}
	 else 
		{	
		cout << "Tu numero es par" << endl;
		}
	system("PAUSE");

}