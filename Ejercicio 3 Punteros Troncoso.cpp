/*
3. Encontrar el mayor y el menor elemento de un arreglo usando punteros y
funciones.

Troncoso Fernando G 5°1°
*/

#include <stdio.h>

int n;
int i;

void mayorYmenor(int a[], int *mayor, int *menor);


int main()
{
    int mayor = 0, menor = 0; 
	
    printf("ingrese la cantidad de numeros que tiene el arreglo\n");
	scanf("%d", &n);
	
	int arr[n];
	
	for(i=0;i<n;i++){
		printf("ingrese el numero en el espacio %d\n",i+1);
		scanf("%d", &arr[i]);
	}

    mayorYmenor(arr, &mayor, &menor);

    printf("El mayor elemento es: \'%d\' \n", mayor);
    printf("El menor elemento es: \'%d\' \n", menor);

    return 0;
}

void mayorYmenor(int a[], int *mayor, int *menor){
   
    *mayor = a[0];
    *menor = a[0];

    for(i=1;i<n;i++){
        if(a[i] > *mayor){
            *mayor = a[i];
        }
        if(a[i] < *menor){
            *menor = a[i];
        }
    }
    
}
