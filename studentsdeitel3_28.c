#include <stdio.h>
int main(){

	int passes = 0, failures = 0, student = 1, result;

	while(student <= 10){

		printf("Enter result (1 = pass, 2 = fail): ");
		scanf("%d", &result);


		if(result == 1){

			passes = passes +1;

		}else if(result == 2){

			failures = failures + +1;

		}else{

			printf("Please type a valid input (1 or 2).\n");

			student = student - 1;

		}

	student = student + 1;

	}

	printf("Passed %d\n", passes);
	printf("Failed %d\n", failures);

	return 0;

}
