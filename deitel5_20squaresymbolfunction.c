#include <stdio.h>

int square(int sides, char key);

int main(void){

	int sides;
	char key;

	printf("Type a number: ");
	scanf("%d", &sides);

	printf("Type a symbol: ");
	scanf(" %c", &key);

	square(sides, key);

	return 0;

}

int square(int sides, char key){

	int i, j;

	for(i = 1; i <= sides; i++){

		for(j = 1; j <= sides; j++){

			printf("%c", key);

		}

		printf("\n");

	}

}
