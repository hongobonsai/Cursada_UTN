/*
 ============================================================================
 Name        : Ejercicio_2-2.c
 Alumno      : Alonso Nicolás Gabriel

 Ejercicio 2-2:
 Ingresar 10 números enteros, distintos de cero. Mostrar:Cantidad de pares e impares. El menor número ingresado.
 De los pares el mayor número ingresado.Suma de los positivos.Producto de los negativos.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeroIngresado;
	int flagMenorNumero = 0;
	int flagMayorNumeroPar = 0;
	int menorNumeroIngresado;
	int mayorNumeroParIngresado;
	int contadorPares = 0;
	int contadorImpares = 0;
	int acumuladorPositivos = 0;
	int acumuladorNegativos = 0;
	int flagNumeroNegativo = 0;
	int productoNegativos;
	int iterador;

	for (iterador = 0; iterador < 10; iterador++) {

		printf("Ingresar un número (Distinto de 0)");
		scanf("%d", &numeroIngresado);

		while (numeroIngresado == 0) {
			printf("¡INGRESAR UN NÚMERO DISTINTO DE 0!");
			scanf("%d", &numeroIngresado);
		}

		if (numeroIngresado % 2 == 0) {
			contadorPares++;
			if (flagMayorNumeroPar == 0){
				mayorNumeroParIngresado = numeroIngresado;
				flagMayorNumeroPar = 1;
			} else {
				if (numeroIngresado > mayorNumeroParIngresado){
					mayorNumeroParIngresado = numeroIngresado;
				}
			}
		} else {
			contadorImpares++;
		}

		if (flagMenorNumero == 0) {
			menorNumeroIngresado += numeroIngresado;
			flagMenorNumero = 1;
		} else {
			if (numeroIngresado < menorNumeroIngresado) {
				menorNumeroIngresado = numeroIngresado;
			}
		}

		if (numeroIngresado >= 0){
			acumuladorPositivos += numeroIngresado;
		} else {
			if (flagNumeroNegativo == 0){
				acumuladorNegativos += numeroIngresado;
				flagNumeroNegativo = 1;
			}else{
				productoNegativos = acumuladorNegativos * numeroIngresado;
				acumuladorNegativos += numeroIngresado;
			}
		}

	}

	printf("Cantidad de pares: %d\n", contadorPares);
	printf("Cantidad de impares: %d\n", contadorImpares);
	printf("Menor número ingresado: %d\n", menorNumeroIngresado);
	printf("Mayor número par ingresado:: %d\n", mayorNumeroParIngresado);
	printf("Suma de positivos: %d\n", acumuladorPositivos);
	if(flagNumeroNegativo == 1){
	printf("Producto de los negativos: %d\n", productoNegativos);
	}else{
		printf("No se ingresaron negativos");
	}
	printf("\n");
	printf("UWU");

	return EXIT_SUCCESS;
}
