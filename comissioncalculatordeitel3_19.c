#include <stdio.h>
int main(){
	float value, salary;

	printf("Enter the value of sales (in dolars) or type -1 to exit program: ");

	scanf("%f", &value);

	if(value != -1){

		do{

			printf("Salary is: $%.2f\n", 200 + (value * 0.09));

			printf("\nEnter the value of sales (in dolars) or type -1 to exit program: ");

			scanf("%f", &value);

		}while(value != -1);

	}

	printf("Program terminated.\n");

	return 0;

}
