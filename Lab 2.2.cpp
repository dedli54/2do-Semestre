#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NUMERO_DE_BITS 8
int main(int argc, char const* argv[])
{
	unsigned long long int decimal = 0;
	char binario[NUMERO_DE_BITS];

	for (int i = 0; i < NUMERO_DE_BITS; ++i) binario[i] = '0';

	unsigned long long int maximo = pow(2, NUMERO_DE_BITS);

	printf("Ingresa el numero decimal [maximo %llu]: \n", maximo - 1);
	scanf_s("%llu", &decimal);
	lldiv_t resultadoDeLaDivision;
	int contador = NUMERO_DE_BITS;

	while (decimal > 0) {
		resultadoDeLaDivision = lldiv(decimal, 2);
		contador--;
		binario[contador] = resultadoDeLaDivision.rem == 1 ? '1' : '0';
		decimal = resultadoDeLaDivision.quot;
	}
	printf("El numero en binario es: %s\n", binario);
	return 0;
}