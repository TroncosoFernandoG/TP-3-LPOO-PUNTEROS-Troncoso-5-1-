/*
4. Copiar un arreglo en otro arreglo usando punteros y funciones. Mostrando
el resultado final.

Troncoso Fernando G 5°1°
*/

#include <stdio.h>

int i;
int n;

void copi(int *arr1, int *arr2);

int main(){
    printf("Ingrese la cantidad de numeros que tienen los arreglos: \n");
    scanf("%d", &n);

    int arr1[n];
    int arr2[n];

    for(i=0;i<n;i++){
        printf("ingrese el numero en el espacio %d\n", i + 1);
        scanf("%d", &arr1[i]);
    }

    copi(arr1, arr2);

    return 0;
}

void copi(int *arr1, int *arr2){
    for(i=0;i<n;i++){
        *(arr2 + i) = *(arr1 + i);
    }

    printf("El arreglo copiado es:\n");
    for(i=0;i<n;i++){
        printf("[%d]\t", *(arr2 + i));
    }
}
