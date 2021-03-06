/*
 ============================================================================
 Name        : Ejercicio_3_4.c
 Alumno      : Alonso Nicol?s Gabriel

Ejercicio 3-4:
Realizar un programa en donde se puedan utilizar los prototipos de la funci?n Sumar en sus 4 combinaciones.
int Sumar1(int, int);
int Sumar2(void);
void Sumar3(int, int);
void Sumar4(void);


 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sumar1(int numeroUno, int numeroDos);
int sumar2(void);
void sumar3(int numeroUno, int numeroDos, int *pResultado);
void sumar4(void);

int main(void) {
		setbuf(stdout, NULL);

		int primerNumero;
		int segundoNumero;
		int opcionMenu;
		int resultado;

		do{
			printf("MEN? PRINCIPAL\n\n");
			printf("1) Utilizar la funci?n Sumar1\n");
			printf("2) Utilizar la funci?n Sumar2\n");
			printf("3) Utilizar la funci?n Sumar3\n");
			printf("4) Utilizar la funci?n Sumar4\n");
			printf("5) EXIT\n");
			scanf("%d", &opcionMenu);
			switch(opcionMenu){

			case 1:
				printf("Ingrese el primer n?mero\n");
				scanf("%d", &primerNumero);
				scanf("%*[^\n]");
				printf("Ingrese el segundo n?mero\n");
				scanf("%d", &segundoNumero);
				scanf("%*[^\n]");
				resultado = sumar1(primerNumero, segundoNumero);
				printf("\nResultado: %d\n\n", resultado);
				break;

			case 2:
				resultado = sumar2();
				printf("\nResultado: %d\n\n", resultado);
				break;

			case 3:
				printf("Ingrese el primer n?mero\n");
				scanf("%d", &primerNumero);
				printf("Ingrese el segundo n?mero\n");
				scanf("%d", &segundoNumero);
				sumar3(primerNumero, segundoNumero, &resultado);
				printf("\nResultado: %d\n\n", resultado);


				break;
			case 4:
				sumar4();
				break;
			case 5:
				break;

			}


		}while(opcionMenu != 5);


	return EXIT_SUCCESS;
}

	//FUNCIONES

	int sumar1(int numeroUno, int numeroDos){
		int auxResultado;
		auxResultado = numeroUno + numeroDos;

		return auxResultado;
	}

	int sumar2(void){
		int numeroUno;
		int numeroDos;
		int auxResultado;

		printf("Ingrese el primer n?mero\n");
		scanf("%d", &numeroUno);
		printf("Ingrese el segundo n?mero\n");
		scanf("%d", &numeroDos);

		auxResultado = numeroUno + numeroDos;

		return auxResultado;
	}

	void sumar3(int numeroUno, int numeroDos, int *pResultado){
		*pResultado = numeroUno + numeroDos;
	}

	void sumar4(void){
		int numeroUno;
		int numeroDos;
		int resultado;

		printf("Ingrese el primer n?mero\n");
		scanf("%d", &numeroUno);
		printf("Ingrese el segundo n?mero\n");
		scanf("%d", &numeroDos);

		resultado = numeroUno + numeroDos;
		printf("\nResultado: %d\n\n", resultado);
	}
