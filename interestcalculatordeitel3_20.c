#include <stdio.h>
int main(){
	float loan, interest, term, charge;

	printf("Enter loan principal or type -1 to exit program: ");

	scanf("%f", &loan);

	if(loan != -1){

		do{

			printf("Enter interest rate: ");

			scanf("%f", &interest);

			printf("Enter term of loan in days: ");

			scanf("%f", &term);

			printf("The charge is: $%.2f\n", charge = loan * interest * term / 365);

			printf("\nEnter loan principal or type -1 to exit program: ");

			scanf("%f", &loan);

		}while(loan != -1);

	}

	printf("Program terminated.\n");

	return 0;

}

