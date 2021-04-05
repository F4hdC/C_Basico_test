// Programa para generar una cadena de carecteres aleatorias
// desde la tabla ASCII 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main (){
	int i = 15;
	int j = 0;
	int aux;
	char cad[i+1]; // de 10 caracteres
	srand(time(NULL));

	while(i != 0){

		aux = (rand()%75)+48; 	
		if(!((aux>57 && aux<65) || (aux>90 && aux<97))){
			cad[j] = aux;	
			printf("%c",cad[j]);
			j++;
			i--;
		}
	}printf("\n");

}