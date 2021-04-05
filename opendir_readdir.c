// explorar un directorio

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/types.h>

int main(int argc,char * argv[]){

	DIR *abrir;
	struct dirent *explorar;

	abrir = opendir(argv[1]);
	if (abrir != NULL){

		while((explorar = readdir(abrir)) != NULL){

			printf("%s\t %d\n",explorar->d_name,explorar->d_type);
		}
		closedir(abrir);
	}

}