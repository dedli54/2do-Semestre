#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;


int main()
{
    float x, y, z, mayor, menor;
   
    cout << "Ingresa 3 numeros distintos" << endl;
    cout << "Dame un numero: " << endl;
    cin >> x; 
    cout << "Dame un numero: " << endl;
    cin >> y;
    cout << "Dame un numero: " << endl;
    cin >> z;

    if (x == y || x == z || y == z)
    {
        cout << "Favor de no meter numeros iguales" << endl;
    }
    else
        if (x > y && y > z)
        {
            mayor = x;
            menor = z;
        }
    if (x > z && z > y)
    {
        mayor = x;
        menor = y;
    }
    if (y > z && z > x)
    {
        mayor = y;
        menor = x;
    }
    if (y > x && x > z)
    {
        mayor = y;
        menor = z;
    }
    if (z > y && y > x)
    {
        z = mayor;
        x = menor;
    }
 if (z>x && x>y)
    {
        z = mayor;
        y = menor;
    }
    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;



    system("PAUSE>NULL");

    return 0;
}
