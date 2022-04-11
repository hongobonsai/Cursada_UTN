/*
 ============================================================================
 Name        : Ejercicio_3_1.c
 Alumno      : Alonso Nicol�s Gabriel

Ejercicio 3-1:
Crear una funci�n que permita determinar si un n�mero es par o no.
La funci�n retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "BIBLIOTECA.h"

int getNumeroPar(int *numeroIngresado);

int main(void) {
	system("cls");
	setbuf(stdout, NULL);

	int numeroIngresado;
	int resultadoParImpar;

	printf("Ingrese un n�mero cualquiera");
	scanf("%d", &numeroIngresado);

	resultadoParImpar = getNumeroPar(&numeroIngresado);

	if (resultadoParImpar == 1){
		printf("El n�mero ingresado es par");
	} else {
		printf("El n�mero ingresado es impar");
	}

}
int getNumeroPar(int *numeroIngresado){
	int retorno;
	if ((*numeroIngresado % 2) == 0){
		retorno = 1;
	} else {
		retorno = 0;
	}

	return retorno;
}
