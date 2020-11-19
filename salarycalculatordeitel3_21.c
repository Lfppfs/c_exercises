#include <stdio.h>
int main(){
	float hours, rate, extra, salary;

	printf("Enter number of hours worked or type -1 to exit program: ");

	scanf("%f", &hours);

	if(hours != -1){

		do{

			printf("Enter hourly rate of the worker: ");

			scanf("%f", &rate);

			if(hours <= 40){

				salary = hours * rate;

			}else{

				extra = hours - 40;
			
				salary = (hours * rate) + extra * rate * 0.5;

			}

			printf("Salary is : %.2f\n", salary);

			printf("\nEnter number of hours worked or type -1 to exit program: ");

			scanf("%f", &hours);

		}while(hours != -1);

	}

	printf("Program terminated.\n");

	return 0;

}

	
