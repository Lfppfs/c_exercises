#include <stdio.h>

int integerPower(int base, int power, int value);

int main(void){

	int base, power, i, value = base;;

	printf("Type the base: ");
	scanf("%d", &base);

	value = base;

	printf("Type the power: ");
	scanf("%d", &power);

	printf("%d\n", base);
	integerPower(base, power, value);

	return 0;

}

int integerPower(int base, int power, int value){

	int i;

	for(i = 2; i <= power; i++){

		printf("%d\n", value = value * base);
		
	}
	
}
