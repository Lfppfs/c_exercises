#include <stdio.h>

int square(int sides);

int main(void){

	int sides;

	printf("Type a number: ");
	scanf("%d", &sides);

	square(sides);

	return 0;

}

int square(int sides){

	int i, j;

	for(i = 1; i <= sides; i++){

		for(j = 1; j <= sides; j++){

			printf("*");

		}

		printf("\n");

	}

}
