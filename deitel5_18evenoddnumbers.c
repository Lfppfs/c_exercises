#include <stdio.h>

int multiple(int n);

int main(void){

	char x;
	int n;

	printf("Type 'i' or type any other key to exit: ");
	scanf(" %c", &x);

	do{
		printf("Type an integer: ");
		scanf("%d", &n);
		
		multiple(n);

		printf("Type 'i' or type any other key to exit: ");
		scanf(" %c", &x);

	}while(x == 'i');

	return 0;

}

int multiple(int n){

	printf("%d\n", n % 2);

}
