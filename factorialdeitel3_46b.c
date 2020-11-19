#include<stdio.h>
int main(){

	int i;

	float e = 0, f_1 = 1, f_2 = 0;

	for(i = 1; i < 10; i++){

		f_1 = f_1 * i;

		f_2 = f_2 + 1/f_1;

		//printf("f_1 = %f\tf_2 = %f\ti = %d\n", f_1, f_2, i);

	}

	e = 1 + f_2;

	printf("e = %f\n", e);

	return 0;

}
