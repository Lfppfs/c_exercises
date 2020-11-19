#include <stdio.h>
int main(){
	int i;

	printf("This program displays the first 10 squares and cubes of 1 to 10:\n"
		"Number\tSquare\tCube\n");

	for(i = 1; i <= 10; i++){

		printf("%d\t%d\t%d\n", i, i * i, i * i * i);

		}

/*	for(i = 1; i <= 10; i++){

		printf("%d\n", i * i * i);

		}
*/
	return 0;
}
