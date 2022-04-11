#include <stdio.h>
#include <stdlib.h>

#define PROBANDO 3

int main(void) {
	setbuf(stdout, NULL);

	int edad;
	int alturaDeDireccion;
	float temperatura;

	printf("Decime tu edad:");
	scanf("%d", &edad);

	printf("Decime tu dirección:");
	scanf("%d", &alturaDeDireccion);

	printf("Ingrese su temperatura:");
	scanf("%f", &temperatura);


	printf("Su edad es: %d, \nSu altura de domicilio es: %d, \ny su temperatura es %.1f"
				, edad, alturaDeDireccion, temperatura);
	return PROBANDO;

}
