#include<stdio.h>
int main(){

	int i, j, k;

	printf("a\tb\tc)\n");

	for(i = 1; i <= 500; i++){

		for(j = 1; j <= 500; j++){

			for(k = 1; k <= 500; k++){

				if(i * i + j * j == k * k){

				printf("Pythagorean triple:%d² + %d² = %d²\n", i, j, k);

				}

			}

		}

	}

	return 0;

}
