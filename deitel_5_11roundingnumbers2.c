#include <stdio.h>
#include <math.h>

float roundToInteger(float x);
float roundToTenths(float x);
float roundToHundreths(float x);
float roundToThousandths(float x);

int main(void){

	int n, i;
	float x;

	printf("Type how many numbers you want to round: ");
	scanf("%d", &n);

	for(i = 1; i <= n; i++){

		printf("Type the #%d number: ", i);
		scanf("%f", &x);
		printf("Input\tRounded to: integer\ttenth\thundredth\tthousandth\n");
		printf("%f\n", roundToInteger(x));
		printf("%f\n", roundToTenths(x));
		printf("%f\n", roundToHundreths(x));
		printf("%f\n", roundToThousandths(x));

	}

	return 0;

}


float roundToInteger(float x){

	float y;

	return y = floor(x + .5);

}

float roundToTenths(float x){

	float y;

	return y = floor(x * 10 + .5) / 10;

}

float roundToHundreths(float x){

	float y;

	return y = floor(x * 100 + .5) / 100;

}

float roundToThousandths(float x){

	float y;

	return y = floor(x * 1000 + .5) / 1000;

}

