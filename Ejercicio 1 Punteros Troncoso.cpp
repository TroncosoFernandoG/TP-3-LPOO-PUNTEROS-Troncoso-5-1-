/*
1. Intercambiar el valor de dos variables usando punteros y funciones.
Mostrando los valores iniciales y valores finales.

Troncoso Fernando G 5°1°

*/

#include <stdio.h>

void variables(int, int);

int main(){
	
	int A, B;

  	printf("Ingrese el valor de A\n");
  	scanf("%d", &A);
	printf("Ingrese el valor de B\n");
  	scanf("%d", &B);
	
	printf("El valor de A es %d\n",A);
	printf("El valor de B es %d\n\n",B);
	
	printf("-----INTERCAMBIO DE VARIABLES-----\n\n");
	
	variables(A,B);
	
	return 0;
}

void variables(int A, int B){
	
	int *puntA, *puntB;
	int c, d;
	
	c=A;
	d=B;
	
	puntA = &A;
	*puntA = d;
	puntB = &B;
	*puntB = c;
	
	printf("El valor de A es %d\n",A);
	printf("El valor de B es %d\n\n",B);
}
