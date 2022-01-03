#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int an, sal, salnue;

	cout << "Escriba los años que ha trabajado en la empresa : ";
	cin >> an;    
	
	cout << "Escriba su salario : ";
	cin >> sal;     

	if (an < 3) {

		salnue = (sal * 0.05) + sal;
		cout << "Su nuevo salario es de: " << salnue << endl;
	}

	else if (an >= 3 && an < 5)
	{
		salnue = (sal* 0.1) +sal;
	cout << "Su nuevo salario es de: " << salnue << endl;
	}

	else if (an >= 5 && an < 5)	
	{					
		salnue = (sal * 0.15) + sal;
			cout << "Su nuevo salario es de: " << salnue << endl;
	}
	else 
	{
		salnue = (sal * 0.2) + sal;
		cout << "Su nuevo salario es de: " << salnue << endl;
	}


	system("PAUSE");
}
