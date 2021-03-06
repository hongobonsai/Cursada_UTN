/*
 ============================================================================
 Name        : Ejercicio_3_b.c
 Alumno      : Alonso Nicol?s Gabriel

 b-Funciones
- Limpie la pantalla
- Asigne a las variables numero1 y numero2 los valores solicitados al usuario
- Valide los mismos entre 10 y 100
- Asigne a la variable operacion el valor solicitado al usuario
- Valide el mismo 's'-sumar, 'r'-restar
- Realice la operaci?n de dichos valores a trav?s de una funci?n
- Muestre el resultado por pantalla

 ============================================================================
 */

#include "BIBLIOTECA.h"

int main(void) {
	system("cls");
	setbuf(stdout, NULL);

	int numeroUno;
	int numeroDos;
	char operacion;
	int resultado;

		do {
			printf("Ingrese el primer n?mero entre 10 y 100: ");
			scanf("%d", &numeroUno);
		} while (numeroUno < 10 || numeroUno > 100);

		do {
			printf("Ingrese el segundo n?mero entre 10 y 100: ");
			scanf("%d", &numeroDos);
		} while (numeroDos < 10 || numeroDos > 100);

		do {
			fflush(stdin);
			printf("Ingrese una operaci?n ('s' para sumar, 'r' para restar");
			scanf("%c", &operacion);
		} while (operacion != 's' && operacion != 'r');

		if (operacion == 's'){
		funcionSumaDosEnteros(numeroUno, numeroDos, &resultado);
		printf("Operaci?n: %d + %d = %d\n", numeroUno, numeroDos, resultado);
		} else {
		funcionRestaDosEnteros(numeroUno, numeroDos, &resultado);
		printf("Operaci?n: %d - %d = %d\n", numeroUno, numeroDos, resultado);
		}

	return EXIT_SUCCESS;
}




