//saber si una cadena contiene 8 o 9 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int averiguar_digitos(char *);

void main(int argc, char* argv[]){

	if(averiguar_digitos(argv[1])){
		printf("Bien\n");
	}
	


}

int averiguar_digitos(char *cadena){

	char *nueve;
	char *ocho;
	int exito;
	nueve = strchr(cadena,'9');
	ocho = strchr(cadena,'8');
	if((nueve == NULL) && (ocho == NULL) ){
		exito = 1;
	}
	return exito;
}
