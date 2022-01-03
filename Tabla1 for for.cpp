#include <math.h>
#include <iostream>

using namespace std;

int z;

int main()
{
	for (int x = 1; x <= 10; x++)
	{
		for (int y = 1; y <= 10; y++)
		{
			z = x * y;
			cout << x << " * " << y << " = " << z << "\t";
		}
		cout << endl;
	}
	system("PAUSE>NULL");

	return 0;
}
