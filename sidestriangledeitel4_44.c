#include<stdio.h>
int main(){

	int a, b, c;

	printf("Print the three numbers: ");
	scanf("%d%d%d", &a, &b, &c);

	if(c > a + b && c < a - b){

		printf("These could represent the sides of a triangle.\n");

	}else{

		printf("These could not represent the sides of a triangle.\n");

	}

	return 0;

}
