#include <stdio.h>
int main(){
	float acc_number, initial_balance, charges, credits, limit, final_balance;

	printf("Enter account number or -1 to end program: ");

	scanf("%f", &acc_number);

	if(acc_number != -1){

		do{

			printf("Enter initial balance: ");

			scanf("%f", &initial_balance);

			printf("Enter charges: ");

			scanf("%f", &charges);

			printf("Enter credits: ");

			scanf("%f", &credits);

			printf("Enter credit limit: ");

			scanf("%f", &limit);

			final_balance = initial_balance + charges - credits;

			printf("Final balance: %f\n", final_balance);

			if(final_balance > limit){
				printf("Credit limit exceeded.\n");

			}

			printf("\nEnter account number or -1 to end program: ");

			scanf("%f", &acc_number);

		}while(acc_number != -1);

	}

	printf("Program terminated.\n");

	return 0;
}
