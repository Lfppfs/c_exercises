#include <stdio.h>
#include <time.h>

// printing even numbers

int main(void){

	int i;

	srand(time(NULL));

	for(i = 1; i <= 1000; i++){

		printf("%d\t", 2 * (1 + rand() % 5));

	}

	printf("\n");

	return 0;

}

// printing odd numbers

/*
int main(void){

	int i;

	srand(time(NULL));

	for(i = 1; i <= 1000; i++){

		printf("%d\t", 1 + (2 * (1 + rand() % 5)));

	}

	printf("\n");

	return 0;

}
*/

// printing numbers from the set 6, 10, 14, 18, 22

/*
int main(void){

	int i;

	srand(time(NULL));

	for(i = 1; i <= 1000; i++){

		printf("%d\t", ((((rand() % 5) * 2) + 3) * 2));

	}

	printf("\n");

	return 0;

}
*/
