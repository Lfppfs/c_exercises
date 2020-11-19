#include <stdio.h>
#include <math.h>

/*int roundToInteger(float x);
int roundToTenths(float x);
int roundToHundreths(float x);
int roundToThousandths(float x);
*/

float rounding(float x);

int main(void){

	int n, i;
	float x;

	printf("Input\t");

	while((x = getchar()) != EOF){

		scanf("%f", &x);
		printf("Rounded number\t");
		printf("%f\n", rounding(x));
		printf("Input\t");

	}

	return 0;

}


float rounding(float x){

	float y;

	return y = floor(x + .5);

}

