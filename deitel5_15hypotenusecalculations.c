#include <stdio.h>
#include <math.h>

int hypotenuse(int a, int b);

int main(void){

	char n;

	int a, b;

	printf("Type t for calculating a hypotenuse or type any other key to exit: ");
	scanf("%c", &n);

	if(n == 't'){

		do{

		printf("Type two sides of a square triangle: ");
		scanf("%d %d", &a, &b);

		printf("Hypotenuse = %d\n", hypotenuse(a, b));

		printf("Type t for calculating another hypotenuse or type any other key to exit: ");
		scanf(" %c", &n);

		}while(n == 't');

		printf("\n");

		return 0;

	}

}

int hypotenuse(int a, int b){

	return sqrt(pow(a, 2) + pow(b, 2)); 

}
