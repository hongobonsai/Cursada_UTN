

//MULTIPLICA DOS NUMEROS
int funcionMultiplicarDosNumeros(int numero, int multiplicador, int *resultado){
	*resultado = (numero * multiplicador);

	return 0;
}

//REALIZA UN DESCUENTO A UN NUMERO.
//LA VARIABLE porcentajeDescuento SE TOMA 1 COMO 100%, 0.5 COMO 50%, 0.25 COMO 25%, ETC
int funcionRealiceDescuento(int numero, float porcentajeDescuento, float *valorDescuento, float *numeroConDescuento) {

	*valorDescuento = numero * porcentajeDescuento;
	*numeroConDescuento = numero - *valorDescuento;

	return 0;
}
