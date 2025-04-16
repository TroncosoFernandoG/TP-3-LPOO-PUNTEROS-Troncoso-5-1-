/*
2. Encontrar la suma y el promedio de los elementos de un arreglo usando
punteros y funciones.

Troncoso Fernando G 5°1°
*/

#include <stdio.h>

int i;
int n;

void prom(int a[], int *prome);

int main(){
	
	printf("ingrese la cantidad de numeros que tiene el arreglo\n");
	scanf("%d", &n);
	
	int arr[n];
	
	for(i=0;i<n;i++){
		printf("ingrese el numero en el espacio %d\n",i+1);
		scanf("%d", &arr[i]);
	}
	
	int prome=0;
	
	prom(arr, &prome);
	
	
	return 0;
	
}

void prom(int a[], int *prome){
	
	int acum=0;
	
	for(i=0;i<n;i++){
		
		acum+=a[i];
	}
	
	printf("la sumatoria de los elementos del arreglo es = %d\n", acum);
	
	*prome = acum / n;
	
	printf("el valor del promedio del arreglo es = %d", *prome);
	
}
