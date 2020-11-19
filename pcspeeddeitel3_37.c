#include<stdio.h>
int main(){

	int i;

	while(i <= 1000000000){

		i++;

		if(i % 100000000 == 0){

			printf("%d\n", i);

		}

	}

	return 0;

}
