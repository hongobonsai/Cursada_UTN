/*
 ============================================================================
 Name        : Ejercicio_1_d
 Alumno      : Alonso Nicol�s Gabriel

 d-Operadores Logicos
 Aplicando el concepto de Operadores L�gicos con valores booleanos en el condicional:
 Solicitar un n�mero al usuario
 Informar si el mismo es par o impar.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeroIngresado;
	printf("Ingrese cualquier n�mero");
	scanf("%i", &numeroIngresado);

	if(numeroIngresado % 2 == 0){
		printf("El n�mero %i es PAR", numeroIngresado);
	} else {
		printf("El numero %i es IMPAR", numeroIngresado);
	}





	return EXIT_SUCCESS;
}
