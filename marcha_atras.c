#include <stdio.h>

int main(){
	int i,j=0,k=-3;
	for(i=0;i<10;i++){
		printf("j = %d,",j);
		//printf("\n");
		printf("k=%d,",k);
		j--;
		k--;
	}
	printf("\n");
}