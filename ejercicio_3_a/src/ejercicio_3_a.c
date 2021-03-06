/*
 ============================================================================
 Name        : Ejercicio_3_a.c
 Alumno      : Alonso Nicol?s Gabriel

 a-Funciones
 - Limpie la pantalla
 - Asigne a la variable numero1 un valor solicitado al usuario
 - Valide el mismo entre 10 y 100
 - Realice un descuento del 5% a dicho valor a trav?s de una funci?n llamada realizarDescuento()
 - Muestre el resultado por pantalla

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "BIBLIOTECA.h"
int main(void) {
	system("cls");
	setbuf(stdout, NULL);

	int numero1;
	float porcentajeDescuento = 0.05;
	float valorDescuento;
	float numeroConDescuento;

	do {
		printf("Ingrese un n?mero entre 10 y 100: ");
		scanf("%d", &numero1);
	} while (numero1 < 10 || numero1 > 100);

	funcionRealiceDescuento(numero1, porcentajeDescuento, &valorDescuento, &numeroConDescuento);

	printf("El valor de del descuento es de: $%.2f, y el precio final con descuento es de: $%.2f",
			valorDescuento, numeroConDescuento);

	return EXIT_SUCCESS;
}

