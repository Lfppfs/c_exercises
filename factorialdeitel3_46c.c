#include<stdio.h>
int main(){

	int i, n, x_val;

	float e = 0, f_1 = 1, f_2 = 0, x = 1;

	// the higher the power of x, the more number of iterations are required to approximate x

	printf("Type powers of x: ");
	scanf("%d", &x_val);

	printf("Type the number of iterations (larger powers of x require more iterations): ");
	scanf("%d", &n);

	for(i = 1; i <= n; i++){

		printf("f_1 = %f\tf_2 = %f\ti = %d\tx = %f\n", f_1, f_2, i, x);

		f_1 = f_1 * i;

		x = x * x_val;

		f_2 = f_2 + x/f_1;

	}

	e = 1 + f_2;

	printf("e^x = %f\n", e);

	return 0;

}
