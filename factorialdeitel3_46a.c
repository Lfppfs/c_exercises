#include<stdio.h>
int main(){

	int n, f, i;

	printf("Type a nonnegative integer: ");
	scanf("%d", &n);

	f = n;

	for(i = 1; i < n; i++){

		f = f * i;

	}

	printf("Factorial of %d is %d\n", n, f);

	return 0;

}
