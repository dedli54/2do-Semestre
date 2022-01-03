#include <iostream>
#include <math.h>

using namespace std;

int x;

int main()
{
	for (x = 5; x <= 100; x = x + 5)
	{
		cout << x << " y su raiz es " << sqrt(x) << endl;
	}
	return (0);
}