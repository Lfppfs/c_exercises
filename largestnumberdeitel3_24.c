#include<stdio.h>
int main(){
	float counter, number, largest;

	printf("Print the 1st number: ");

	scanf("%f", &number);

	largest = number;

	for(counter = 1; counter <= 9; counter++){

		printf("Print the next number: ");

		scanf("%f", &number);

		if(largest <= number){
			largest = number;
		}

	}

	printf("The largest number is: %f\n", largest);

	return 0;
}
