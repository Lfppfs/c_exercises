#include<stdio.h>
int main(){

	float pi = 4, n = 1;
	int i, x;

	printf("Type how many terms you want for the approximation: ");
	scanf("%d", &x);
	printf("Pi value\tNumber of terms\n");

	for(i = 1; i <= x; i++){

	n = n + 2;

		if(i % 2 == 0){

			pi = pi + 4/n;

		}else{

			pi = pi - 4/n;

		}

	printf("%f\t%d\n", pi, i);

	}

	return 0;

}
