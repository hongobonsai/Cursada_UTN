/*
 ============================================================================
 Name        : Ejercicio_3_2.c
 Alumno      : Alonso Nicol�s Gabriel

Ejercicio 3-2:
Crear una funci�n que muestre por pantalla el n�mero flotante que recibe como par�metro.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void printMsjFloat(float numeroIngresado, char * mensaje);

int main(void) {
	system("cls");
	setbuf(stdout, NULL);

	float numeroIngresado;

	printf("Ingrese un n�mero flotante para mostrar por pantalla");
	scanf("%f", &numeroIngresado);

	printMsjFloat(numeroIngresado, "El n�mero que ingresaste es: \n");
	}

void printMsjFloat(float numeroIngresado, char * mensaje){

printf("%s", mensaje);
printf("%.2f", numeroIngresado);

}
