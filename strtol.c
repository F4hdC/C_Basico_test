// lo que devuelve strtol()

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){

	char *ptr;
	if ( argc > 1 ) {
		int num = strtol(argv[1],&ptr,10);
		// habrá que verificar que ptr retorna un 0, si no, eso quiere decir que la cadena no es convertible a un Int, exmp : "123String" "string"
		if (*ptr == 0) printf("%d\n",num);
		else printf("Input erroneo \n");
	}else printf("Sin Entrada \n");

}
