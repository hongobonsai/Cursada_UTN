/*
 * BIBLIOTECA.c
 *
 *  Created on: 7 abr. 2022
 *      Author: Hongo
 */
//EN EL C SE PONE EL DESARROLLO DE FUNCION

#include "BIBLIOTECA.h"


///@brief Suma 2 numeros.
///@param primerNumero trae el primer número a sumar.
///@param segundoNumero trae el segundo número a sumar.
///@param *resultado Te devuelve el resultado por puntero.
///@return Retorna el resultado por medio de return.
int funcionSumaDosEnteros(int primerNumero, int segundoNumero, int *resultado) {

	*resultado = primerNumero + segundoNumero;
	return *resultado;
}


///@brief Resta 2 numeros.
///@param primerNumero trae el primer número a restar.
///@param segundoNumero trae el segundo número a restar.
///@param *resultado Te devuelve el resultado por puntero.
///@return Retorna el resultado por medio de return.
int funcionRestaDosEnteros(int primerNumero, int segundoNumero, int *resultado) {

	*resultado = primerNumero - segundoNumero;
	return *resultado;
}


///@brief Realiza el descuento de un número entero.
///@param porcentajeDescuento trae el porcentaje en 0.10 para 10%, 0.05 para 5%, etc.
///@param valorDescuento devuelve el valor en número de SOLO el descuento.
///@param *resultado Te devuelve el resultado por puntero.
///@return Retorna el resultado por medio de return.
int funcionRealiceDescuento(int numero, float porcentajeDescuento, float *valorDescuento, float *numeroConDescuento) {

	*valorDescuento = numero * porcentajeDescuento;
	*numeroConDescuento = numero - *valorDescuento;

	return 0;
}
