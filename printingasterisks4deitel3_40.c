#include<stdio.h>
int main(){

	int i = 1;

	while(i < 100){

		if(i % 11 != 0){

			printf("* ");
		
		}else if(i % 11 == 0 && i % 2 == 0){

			printf("\n");

		}else if(i % 11 == 0 && i % 2 != 0){

			printf("\n");
			printf(" ");
		}

		i++;

	}

	printf("\n");

	return 0;

}

