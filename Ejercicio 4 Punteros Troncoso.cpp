/*
4. Copiar un arreglo en otro arreglo usando punteros y funciones. Mostrando
el resultado final.

Troncoso Fernando G 5°1°
*/

#include <stdio.h>
#include <string.h>

int i;
int n;

void copiar(char *cadena, char *cadena2);

int main(){
	
	char cadenaOri[50];
	char cadenaCopia[50];
	
	printf("ingresar la 1era cadena de caracteres: \n ");
	fgets(cadenaOri, sizeof(cadenaOri), stdin);
	cadenaOri[strcspn(cadenaOri, "\n")] = '\0';
	
	
	copiar(cadenaOri, cadenaCopia);
	
	
	return 0;
}

void copiar(char *cadena, char *cadena2){
	
	strcpy(cadena2, cadena);
	
	printf("la cadena conpia queda asi: \' %s \' ", cadena2);
	
}
