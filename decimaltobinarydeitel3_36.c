#include <stdio.h>
#include<math.h>
int main(){

	float dig, j = 1;
	int num, num2, i = 1, length;

	printf("Type a number: ");
	scanf("%d", &num);

	printf("Type how many digits the number has: ");
	scanf("%d", &length);

	while(j < length){

		i *= 10;
		j++;

	}

	for(i, j = length - 1; i >= 1 && j >= 0; i /= 10, j--){

		dig = num / i;

		printf("Digit: %f\t", dig);

		num = num % i;

		printf("i = %d\t", i);
		printf("j = %f\t", j);

		num2 += (dig * pow(2,j));

		printf("num2 = %d\n", num2);

	}


	printf("num = %d\n", num2);
	
	return 0;
}
