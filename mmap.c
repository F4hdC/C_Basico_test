// mapeo de un archivo, leyendolo por completo y cambiado una letra por otra

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>

void main(int argc, char* argv[]){

int fd,j;
char *mapeo;
int tam;


	fd = open(argv[1],O_RDWR);
	tam = lseek(fd,0,SEEK_END);


	mapeo = mmap(NULL,tam,PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);
		//fprintf(stdout, "Antes\n%s\n",mapeo);
			if(mapeo == MAP_FAILED){
				perror(" ");
			}
					for(j=0;j<tam;j++){
						if(mapeo[j] == 'a'){
							mapeo[j] = 'o';
						}
					}
}