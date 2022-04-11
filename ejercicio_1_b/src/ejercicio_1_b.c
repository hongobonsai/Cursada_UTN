/*
 ============================================================================
 Name        : Ejercicio_1-b
 Alumno      : Alonso Nicolás Gabriel

 b-Entrada/salida
 Pedir el sueldo al usuario. Sumarle un 10% e informarle cuál será su sueldo con aumento.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	float sueldoIngresado;
	float porcentajeAumento = 0.10;
	float valorAumento;
	float sueldoFinal;

	printf("Cual es tu sueldo?:");
	scanf("%f", &sueldoIngresado); //al ser un sueldo con decimales, supongo que va %f.
	valorAumento = (sueldoIngresado * porcentajeAumento);
	sueldoFinal = (sueldoIngresado + valorAumento);

	printf("Su sueldo con aumento es de: $%.2f", sueldoFinal);
	return EXIT_SUCCESS;
}
