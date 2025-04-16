/*
6. Contar el número de ocurrencias de un elemento en un arreglo usando
puntero y funciones

Troncoso Fernando G 5°1°
*/

#include <stdio.h>

int n;
int i;

void contador(int a[], int *b, int c);

int main(){
	
    int cont = 0;
    int elemento;

    printf("ingrese la cantidad de numeros que tiene el arreglo\n");
	scanf("%d", &n);
	
	int arr[n];
	
	for(i=0;i<n;i++){
		printf("ingrese el numero en el espacio %d\n",i+1);
		scanf("%d", &arr[i]);
	}

    printf("Ingrese el elemento al que desea contar sus ocurrencias: ");
    scanf("%d", &elemento);

    contador(arr, &cont, elemento);

    printf("El elemento %d aparece un total de %d veces en el arreglo.\n", elemento, cont);

    return 0;
}

void contador(int a[], int *b, int c){
    *b = 0;

    for(i = 0; i < n; i++){
        if(*(a + i) == c){
            (*b)++;
        }
    }
}
