/*
 ============================================================================
 Name        : Ejercicio_1-c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int edad;
	char estadoCivil;
	printf("Cual es tu estado civil? (Ingresar C para casado, S para soltero, V para viudo, D para divorciado\n ");
	scanf("%c", &estadoCivil);
	printf("Ingrese su edad\n");
	scanf("%i", &edad);

	while (estadoCivil != 'C' && estadoCivil != 'S' && estadoCivil != 'V' && estadoCivil != 'D') {

		printf("INGRESE UN ESTADO CIVIL VALIDO!\n");
		fflush(stdin);
		printf("Cual es tu estado civil? (Ingresar C para casado, S para soltero, V para viudo, D para divorciado\n");
		scanf("%c", &estadoCivil);
		printf("Ingrese su edad\n");
		scanf("%i", &edad);
	}

	if (estadoCivil != 's' && edad < 18) {
		printf("Es muy pequeño para NO ser soltero.");
	} else {
		printf("Su estado civil es: %c, y su edad es: %i", estadoCivil, edad);
	}

	//printf("Cual es tu sueldo?:");
	//scanf("%f", &sueldoIngresado); //al ser un sueldo con decimales, supongo que va %f.
	//valorAumento = (sueldoIngresado * porcentajeAumento);
	//sueldoFinal = (sueldoIngresado + valorAumento);
	return EXIT_SUCCESS;
}

