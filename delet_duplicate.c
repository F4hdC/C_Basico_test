// quitar el duplicado de un array

#include <stdio.h>
#include <stdlib.h>


void main(void){

	int mi_vector[8] = {2,3,2,4,7,1,5,7};
	int i,j,k;
	int tam = sizeof(mi_vector)/sizeof(mi_vector[0]);

	printf("##### Antes ######\n");
	for (int i = 0; i < tam; ++i)
	{
		printf("%d ",mi_vector[i]);
	}
	printf("\n");

	for(i=0;i<tam;i++){
		for(j=i+1;j<tam;j++){
		printf("comparo el %d con el %d \n",mi_vector[i],mi_vector[j]);
			if(mi_vector[i] == mi_vector[j]){
				
				mi_vector[j] = mi_vector[j+1];
				for(k=j; k<tam; k++)
                {
                    mi_vector[k] = mi_vector[k + 1];
                }
                tam--;
                j--;			
            }
		}

	}
	printf("##### Después ######\n");
	for (int i = 0; i < tam; ++i)
	{
		printf("%d ",mi_vector[i]);
	}
	printf("\n");
	
}