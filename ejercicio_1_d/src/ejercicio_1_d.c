/*
 ============================================================================
 Name        : Ejercicio_1_d
 Alumno      : Alonso Nicolás Gabriel

 d-Operadores Logicos
 Aplicando el concepto de Operadores Lógicos con valores booleanos en el condicional:
 Solicitar un número al usuario
 Informar si el mismo es par o impar.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeroIngresado;
	printf("Ingrese cualquier número");
	scanf("%i", &numeroIngresado);

	if(numeroIngresado % 2 == 0){
		printf("El número %i es PAR", numeroIngresado);
	} else {
		printf("El numero %i es IMPAR", numeroIngresado);
	}





	return EXIT_SUCCESS;
}
