#include <stdio.h>
#include <math.h>

float calculateCharges(float hours);

int main(void){

	float hours[3], charge, vector[3];
	int i;

	for(i = 1; i <= 3; i++){

		printf("Enter the number of hours for car #%d: ", i);
		scanf("%f", &hours[i]);

		vector[i - 1] = calculateCharges(hours[i]);

	}

	printf("Car\tHours\t\tCharge\n");

	for(i = 1; i <= 3; i++){

		printf("%d\t%f\t%f\n", i, hours[i], vector[i - 1]);

	}

	return 0;

}

float calculateCharges(float hours){

	float charge;
	
	if(hours <= 3){

		charge = 2;

	}else if(hours >= 3){

		charge = 2 + (hours * 0.5);

	}

	return charge;

}
