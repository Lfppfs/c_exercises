#include <stdio.h>
int main(){

	int num, i, dig1, dig2, dig3, dig4, dig5;

	printf("Type a five-digit number: ");
	scanf("%d", &num);
/*
	for(i = 10000; i >= 1; i /= 10){

		dig = num / i;

		printf("Digit: %d\n", dig);

		num = num % i;

	}
*/
	dig1 = num / 10000;
	num = num % 10000;
	dig2 = num / 1000;
	num = num % 1000;
	dig3 = num / 100;
	num = num % 100;
	dig4 = num / 10;
	num = num % 10;
	dig5 = num;
	
	printf("Digit: %d\n", dig1);
	printf("Digit: %d\n", dig2);
	printf("Digit: %d\n", dig3);
	printf("Digit: %d\n", dig4);
	printf("Digit: %d\n", dig5);

	if(dig1 == dig5 && dig2 == dig4){

		printf("The number is a palindrome.\n");

	}else{

		printf("The number is not a palindrome.\n");

	}

	return 0;
}
