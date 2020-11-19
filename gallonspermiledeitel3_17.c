#include <stdio.h>
int main(){
	float gallons, miles, total_gallons = 0, sum = 0, avg;

		printf("Enter the gallons used or type -1 to end: ");

		scanf("%f", &gallons);

	if(gallons != -1){
	
		do{

			printf("Enter the miles driven: ");

			scanf("%f", &miles);

			printf("The miles / gallon for this tank was %3.3f \n", miles / gallons);

			total_gallons = total_gallons + gallons;
			sum = miles + sum;

			printf("\nEnter the gallons used or type -1 to end: ");

			scanf("%f", &gallons);

			avg = sum / total_gallons;

		}while(gallons != -1);

		printf("\nThe overall average miles / gallon was %f\n", avg);
	}
		

	return 0;
}
