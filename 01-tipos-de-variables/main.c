#include <stdio.h>

int main()
{
	int vector[10];
	char cadena[30] = "Hola mundo!\n";
	printf("[char]--------->%2lu bytes\n", sizeof(char));
	printf("[short]-------->%2lu bytes\n", sizeof(short));
	printf("[short int]---->%2lu bytes\n", sizeof(short int));
	printf("[int]---------->%2lu bytes\n", sizeof(int));
	printf("[float]-------->%2lu bytes\n", sizeof(float));
	printf("[long]--------->%2lu bytes\n", sizeof(long));
	printf("[long int]----->%2lu bytes\n", sizeof(long int));
	printf("[double]------->%2lu bytes\n", sizeof(double));
	printf("[long double]-->%2lu bytes\n", sizeof(long double));
	printf("[double long]-->%2lu bytes\n", sizeof(double long));
	printf("[cadena]------->%2lu bytes\n", sizeof(cadena));
	printf("[vector]------->%2lu bytes\n", sizeof(vector));
	printf("\n");
	printf("La direccion de memoria de vec es: [%p]\n", (void *) &vector);
	printf("La direccion de memoria de cad es: [%p]\n", (void *) &cadena);
	return 0;
}
