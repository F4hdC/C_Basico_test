//Saber el tamaño de un fichero con dos maneras diferentes

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char* argv[]){
	int fd;
	char c;
	int leer,escribir;

	if (argc < 2 || argc > 2){
		fprintf(stdout, "Se espera 1 parámetro\n");
	}else{
		fd = open(argv[1],O_RDONLY);
		//fd2 = open(argv[2],O_WRONLY | O_CREAT,00700);

		if(fd != -1){
			// la primera manera
			int contador_while=0;
			while(leer = read(fd,&c,1)){
				contador_while+=1;
			}
			off_t len;
			len = lseek(fd,0,SEEK_END);
			printf("Con while:\nTamaño del fichero es: %d\n",contador_while);
			printf("Con lssek_end:\nTamaño del fichero es: %ld\n",len);


		}
	}
}