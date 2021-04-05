#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// random numero basico
// del 1 a 8 => [(8-1)+1] + 1
// del 5 a 10 => [(10-5)+1] + 5
void main(void){
	int i = 10;
	srand(time(NULL));
	while(i != 0){
	printf("%d ",(rand() %5 +5));
	i--;
}
printf("\n");

}
