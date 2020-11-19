#include<stdio.h>
int main(){
	int i;

	printf("N\t10*N\t100*N\t1000*N\t\n\n");

	for(i = 1; i <= 10; i++){

		printf("%d\t%d\t%d\t%d\t\n", i, i * 10, i * 100, i * 1000);

	}

	return 0;
}
