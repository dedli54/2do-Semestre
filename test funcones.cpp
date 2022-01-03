#include <iostream>

using namespace std;

void triangulo(int base, int altura);
void cuadrado();
int rectangulo(int base, int altura);

int main()
{
    int base, altura;

    cout << "Ingresa la base: ";
    cin >> base;
    cout << "Ingresa la altura: ";
    cin >> altura;

    triangulo(base, altura);
    cuadrado();
    cout << "El resultado del area del rectangulo es: " << rectangulo(base, altura);

    system("PAUSE");
};


void triangulo(int base, int altura)
{
    cout << "El resultado del triangulo es: " << (base * altura) / 2;
}
void cuadrado()
{
    int lado;
    cout << "Ingresa el valor del lado: ";
    cin >> lado;
    cout << "El resultado del cuadrado es: " << lado * lado << endl;
}

int rectangulo(int base, int altura)
{
    return base * altura;
}