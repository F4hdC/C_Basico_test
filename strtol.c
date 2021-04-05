// lo que devuelve strtol()

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(int argc, char* argv[]){

	char *ptr;

	int num = strtol(argv[1],&ptr,10);
	printf("%d\n",num);

}
