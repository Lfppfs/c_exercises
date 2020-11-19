#include<stdio.h>
int main(){
	float counter, number, L, L_2;

	printf("Type a number: ");
	scanf("%f", &number);

	L = number;

	printf("Type the next number: ");
	scanf("%f", &number);

	L_2 = number;

	for(counter = 1; counter <= 8; counter++){

		printf("Type the next number: ");
		scanf("%f", &number);

//		printf("i > L? %d\n", number > L);
	//	printf("i > L_2? %d\n", number > L_2);

		if(number > L){
			
			L_2 = L;
			L = number;

		}

		if(number > L_2 && number < L){

			L_2 = number;

		}

	}

	printf("The largest numbers are %f and %f.\n", L, L_2);

	return 0;
}
