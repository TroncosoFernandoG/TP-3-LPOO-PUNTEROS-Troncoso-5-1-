/*2. Encontrar la suma y el promedio de los elementos de un arreglo usando
punteros y funciones.*/
#include <stdio.h>

void prom(int, int);

int main()
{
	int n;
	printf("ingrese la cantidad de numeros que tiene el arreglo\n");
	scanf("%d", &n);
	
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("ingrese el numero en el espacio %d\n",i+1);
		scanf("%d", &arr[i]);
	}
	int acum=0;
	
		for(int i=0;i<n;i++){
		acum+=arr[i];
	}
	
		printf("la suma de todos los elementos del arreglo es %d\n", acum);
	prom(n, acum);
	

	
return 0;	
}

void prom(int a, int b){
	
	int *loc;
	
	int c;
	
	loc=&c;
	
	*loc=b/a;


printf("el promedio es %d\n", c);

}
