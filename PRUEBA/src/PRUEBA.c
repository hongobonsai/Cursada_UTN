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



/*

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int contador = 0;
	int promedio;
	int acumulador = 0;
	int numeroIngresado;

	while (contador < 5){
		printf("Ingresar un numero");
		scanf("%d", &numeroIngresado);
		contador++;
		acumulador += numeroIngresado;
	}
	promedio = acumulador / contador;
	printf("%d, %d", acumulador, promedio);
	return EXIT_SUCCESS;
}

*/


