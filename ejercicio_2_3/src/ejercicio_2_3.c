/*
 ============================================================================
 Name        : Ejercicio_2_3.c
 Alumno      : Alonso Nicol?s Gabriel

 Ejercicio 2-3:
 Debemos alquilar el servicio de transporte para llegar a Mar del Plata con un grupo de personas, de cada persona debemos obtener los
 siguientes datos:
 n?mero de cliente,
 estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
 edad( solo mayores de edad, m?s de 17),
 temperatura corporal (validar por favor)
 y sexo ('f' para femenino, 'm' para masculino, 'o' para no binario).
 NOTA: el precio por pasajero es de $600.
 Se debe informar (solo si corresponde):
 a) La cantidad de personas con estado "viudo" de m?s de 60 a?os.
 b) el n?mero de cliente y edad de la mujer soltera m?s joven.
 c) cu?nto sale el viaje total sin descuento.
 d) si hay m?s del 50% de los pasajeros que tiene m?s de 60 a?os , el precio final tiene un descuento del 25%, que solo mostramos si corresponde.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define PRECIO_PASAJERO 600
#define PORCENTAJE_DESCUENTO 0.25

int main(void) {
	setbuf(stdout, NULL);

	int numeroCliente;
	char estadoCivil;
	int edad;
	float temperatura;
	char sexo;
	char respuesta;

	int contadorViudoSesenta = 0;

	int flagMujerSolteraMasJoven = 0;
	int numeroClienteMujerSolteraMasJoven;
	int edadMujerSolteraMasJoven;

	int precioTotalSinDescuento = 0;

	int cantidadPasajerosMayorSesentaAnios = 0;
	int cantidadPasajerosMenorSesentaAnios = 0;
	int valorDescuento;
	int precioTotalConDescuento;
	int flagMasDeLaMitadPasajerosSesenta = 0;

	do {
		printf("Ingrese su n?mero de cliente: ");
		scanf("%d", &numeroCliente);

		do {

			printf(
					"Ingrese su estado civil ('s' para soltero, 'c' para casado, 'v', para viudo");
			scanf("%c", &estadoCivil);
		} while (estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'v');

		do {
			fflush(stdin);
			printf("Ingrese su edad (Debe tener +18 a?os)");
			scanf("%d", &edad);
		} while (edad < 18);

		do {
			printf("Ingrese su temperatura (entre 34 y 42 grados");
			scanf("%f", &temperatura);
		} while (temperatura < 34 || temperatura > 42);

		do {
			fflush(stdin);
			printf(
					"Ingrese su sexo ('f' para femenino, 'm' para masculino, 'o', para no binario");
			scanf("%c", &sexo);
		} while (sexo != 'm' && sexo != 'f' && sexo != 'o');

		if (estadoCivil == 'v' && edad >= 60) {
			contadorViudoSesenta++;
		}

		if (sexo == 'f' && estadoCivil == 's') {

			if (flagMujerSolteraMasJoven != 0) {
				flagMujerSolteraMasJoven = 1;
				edadMujerSolteraMasJoven = edad;
				numeroClienteMujerSolteraMasJoven = numeroCliente;
			} else {
				if (edad < edadMujerSolteraMasJoven) {
					edadMujerSolteraMasJoven = edad;
					numeroClienteMujerSolteraMasJoven = numeroCliente;
				}
			}
		}

		precioTotalSinDescuento += PRECIO_PASAJERO;

		if (edad > 60) {
			cantidadPasajerosMayorSesentaAnios++;
		} else {
			cantidadPasajerosMenorSesentaAnios++;
		}

		fflush(stdin);
		printf("Desea seguir ingresando usuarios? (s/n)");
		scanf("%c", &respuesta);

	} while (respuesta == 's');

	if (cantidadPasajerosMayorSesentaAnios > cantidadPasajerosMenorSesentaAnios) {
		flagMasDeLaMitadPasajerosSesenta = 1;
		valorDescuento = precioTotalSinDescuento * PORCENTAJE_DESCUENTO;
		precioTotalConDescuento = precioTotalSinDescuento - valorDescuento;
	}

	printf(
			"Se ingresaron %d personas con estado civil 'viudo' de mas de 60 a?os.\n",
			contadorViudoSesenta);
	printf(
			"La mujer soltera mas joven tiene: %d a?os, y su n?mero de cliente es: %d.\n",
			edadMujerSolteraMasJoven, numeroClienteMujerSolteraMasJoven);
	printf("Precio total sin descuento: $%d", precioTotalSinDescuento);

	if (flagMasDeLaMitadPasajerosSesenta == 1){
		printf("El precio total con descuento es de: $%d.\n", precioTotalConDescuento);
	}
	return EXIT_SUCCESS;
}

//a) La cantidad de personas con estado "viudo" de m?s de 60 a?os.
//b) el n?mero de cliente y edad de la mujer soltera m?s joven.
//c) cu?nto sale el viaje total sin descuento.
//d) si hay m?s del 50% de los pasajeros que tiene m?s de 60 a?os , el precio final tiene un descuento del 25%, que solo mostramos si corresponde.

