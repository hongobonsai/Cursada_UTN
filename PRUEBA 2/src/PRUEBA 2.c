/*
 ============================================================================
 Name        : PRUEBA.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
		setbuf(stdout, NULL);
		long int numeroIngresado;
		int asd = 1;

		do{
			printf("ingrese\n");
			scanf("%ld", &numeroIngresado);
			scanf("%*[^\n]");
			printf("resultado %ld\n", numeroIngresado);
		} while (asd == 1);
		return 0;
}
