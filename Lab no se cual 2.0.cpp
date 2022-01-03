#include <stdio.h>

int main()
{
	char string[256];
	printf("Escriba su nombre y apellido: ");
	gets_s(string);    
	printf("Your address is: %s\n", string);
	return 0;
}