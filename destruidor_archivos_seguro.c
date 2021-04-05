// Le pasas un archivo como argumento y lo destruye completamente, a lo que se llama un borrado Seguro
// complie this with "namefile.c"
// run with ./a.out "argumento"

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <time.h>
#include <string.h>

int main(int argc, char* argv[]){
	int i,fd,j,del,max;
	off_t len;
	char aux;
	srand(time(NULL));
    char mi_cadena[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
	max = strlen(mi_cadena) + 1;
	
	if (argc > 1){
		for (i=1;i<argc;i++){
			fd = open(argv[i],O_RDWR);
			if(fd != -1){
				len = lseek(fd,0,SEEK_END);
				lseek(fd,0,SEEK_SET);
				if(len != -1){
					for(j=0;j<len;j++){	
						lseek(fd,j,SEEK_SET);
						aux = mi_cadena[rand() % max];
						write(fd,&aux,sizeof(aux));
					}
					close(fd);
					fprintf(stdout, "El archivo %s, Destruido Correctamente\n",argv[i]);
					del = unlink(argv[i]);
					if(del != -1){
						
					}
				}else{fprintf(stderr,"Error en posicionar el puntero en %s",argv[i]);}
			}else{fprintf(stderr, "Error de apertura de %s\n",argv[i]);}
		}
	}

	
}