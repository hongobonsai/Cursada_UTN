/*
 * BIBLIOTECA.c
 *
 *  Created on: 7 abr. 2022
 *      Author: Hongo
 */
//EN EL C SE PONE EL DESARROLLO DE FUNCION

#include "BIBLIOTECA.h"


///@brief Suma 2 numeros.
///@param primerNumero trae el primer n?mero a sumar.
///@param segundoNumero trae el segundo n?mero a sumar.
///@param *resultado Te devuelve el resultado por puntero.
///@return Retorna el resultado por medio de return.
int funcionSumaDosEnteros(int primerNumero, int segundoNumero, int *resultado) {

	*resultado = primerNumero + segundoNumero;
	return *resultado;
}


///@brief Resta 2 numeros.
///@param primerNumero trae el primer n?mero a restar.
///@param segundoNumero trae el segundo n?mero a restar.
///@param *resultado Te devuelve el resultado por puntero.
///@return Retorna el resultado por medio de return.
int funcionRestaDosEnteros(int primerNumero, int segundoNumero, int *resultado) {

	*resultado = primerNumero - segundoNumero;
	return *resultado;
}


///@brief Realiza el descuento de un n?mero entero.
///@param porcentajeDescuento trae el porcentaje en 0.10 para 10%, 0.05 para 5%, etc.
///@param valorDescuento devuelve el valor en n?mero de SOLO el descuento.
///@param *resultado Te devuelve el resultado por puntero.
///@return Retorna el resultado por medio de return.
int funcionRealiceDescuento(int numero, float porcentajeDescuento, float *valorDescuento, float *numeroConDescuento) {

	*valorDescuento = numero * porcentajeDescuento;
	*numeroConDescuento = numero - *valorDescuento;

	return 0;
}


///@brief Realiza la obtenci?n de un n?mero entero.
///
///@param *pNumeroIngresado: Devuelve el n?mero ingresado a nuestra variable del main.
///@param *mensaje: La funci?n recibe el mensaje a imprimir "ejemplo mensaje".
///@param *mensajeError: La funci?n recibe el mensaje a imprimir en caso de que el
/// usuario ingrese mal el dato pedido "ejemplo mensaje ERROR".
///@param minimo y maximo: Definen el l?mite minimo y m?ximo del entero a ingresar.
///@param maximoDeReintentos: Define el m?ximo de reintentos para ingresar el dato. Ingresar 0 para que no haya limite.
///@return Retorna -1 Si sali? mal, 0 Si sali? bien.
int getInt(int * pNumeroIngresado,char * mensaje,char * mensajeError,
		int maximo, int minimo, int maximoDeReintentos){

	int auxNumeroIngresado;
	int retorno;
	retorno = -1;

	if(pNumeroIngresado != NULL && maximo >= minimo && maximoDeReintentos>= 0){
		do{
			printf("%s", mensaje);
			scanf("%d", &auxNumeroIngresado);
			maximoDeReintentos--;

			if(auxNumeroIngresado >= minimo && auxNumeroIngresado <= maximo){
						*pNumeroIngresado = auxNumeroIngresado;
						retorno = 0;
						break;
			}else{
				printf("%s", mensajeError);
			}

		}while(maximoDeReintentos > 0);
	}

	return retorno;
}
