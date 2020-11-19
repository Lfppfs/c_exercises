#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

	int i;

	srand(time(NULL));

	for(i = 1; i <= 1000; i++){

		printf("%d\t", 1 + rand() % 1000);

	}
	
	return 0;

}
