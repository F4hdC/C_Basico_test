// saber la longitud de un numero 

#include <stdio.h>
#include <stdlib.h>

void main(int argc, char* argv[]){
	
	int i=1;
	int num = atoi(argv[1]);
	while((num/10) != 0){
		num = num/10;
		i++;
	}
	printf("len de [%s] es %d \n",argv[1],i);

}

int saber_len_numero(int num){
	int i=1;
	while((num/10) != 0){
		num = num/10;
		i++;
	}
	return i;
}