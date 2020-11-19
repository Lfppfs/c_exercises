#include<stdio.h>
int main(){

	int i = 1;

	while(i < 100){

		if(i % 11 != 0){

			printf("* ");
		
		}else{

			printf("\n");

		}

		i++;

	}

	return 0;

}


