/*
 ============================================================================
 Name        : Ejercicio_2-1.c
 Alumno      : Alonso Nicol�s Gabriel

 Ejercicio 2-1: Ingresar 5 n�meros enteros calcular y mostrar el promedio de los n�meros. Probar la aplicaci�n con distintos valores.
 Ejemplo 1:  3 - 5 - 7 - 9 - 1
 Ejemplo 2:  2 - 1 - 8 -1 - 2
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int contador = 0;
	int promedio;
	int acumulador = 0;
	int numeroIngresado;
	int flag = 0;

	for (contador = 0; contador < 5; contador++){
		if (flag == 0){
			printf("Ingresar un numero");
			scanf("%d", &numeroIngresado);
		} else if(flag ==1){
			printf("Ingresar otro numero");
			scanf("%d", &numeroIngresado);
		}
		acumulador += numeroIngresado;
		flag = 1;
	}
	promedio = acumulador / contador;
	printf("Cantidad total: %d, Promedio: %d", acumulador, promedio);
	return EXIT_SUCCESS;
}
//FUNCIONES 1ER APUNTE:
//https://onlinegdb.com/lwQqRBYcl
