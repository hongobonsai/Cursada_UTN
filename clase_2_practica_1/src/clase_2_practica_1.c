
//PRUEBA FOR


#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main(void) {
	setbuf(stdout, NULL);
	int numeroIngresado;
	int numeroMayor;
	int numeroMenor;
	int flagNumero = FALSE;
	int i;


	for(i = 0; i < 5; i++){
		printf("Ingrese un n�mero: ");
		scanf("%d", &numeroIngresado);

		if (flagNumero == FALSE){
			flagNumero = TRUE;
			numeroMayor = numeroIngresado;
			numeroMenor = numeroIngresado;
		}


		if (numeroIngresado < numeroMenor){
			numeroMenor = numeroIngresado;
		} else if (numeroIngresado > numeroMayor){
			numeroMayor = numeroIngresado;
		}
		fflush(stdin);
	}

	printf("El n�mero mayor ingresado fue: %d, y el n�mero menor ingresado fue: %d", numeroMayor, numeroMenor);

	return EXIT_SUCCESS;

}
