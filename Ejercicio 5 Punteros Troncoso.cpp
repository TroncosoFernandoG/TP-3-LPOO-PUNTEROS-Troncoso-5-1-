/*
5. Concatenar dos cadenas usando punteros y funciones.

Troncoso Fernando G 5°1°
*/

#include <stdio.h>
#include <string.h>


void concatenar(char *cadena, char *cadena2);

int main(){
	
char cadena[50];
char cadena2[50];
	
	printf("ingresar la 1era cadena de caracteres: ");
	fgets(cadena, sizeof(cadena), stdin);
	cadena[strcspn(cadena, "\n")] = '\0';
	
	printf("ingresar la 2da cadena de caracteres: ");
	fgets(cadena2, sizeof(cadena2), stdin);
	cadena2[strcspn(cadena2, "\n")] = '\0';
	
	concadena(cadena, cadena2);
	
	return 0;
}

void concatenar(char* cadena, char* cadena2){
	
	strcat(cadena, cadena2);
	
	printf("la cadena concatenada queda asi: \'%s\' ", cadena);
	
}

