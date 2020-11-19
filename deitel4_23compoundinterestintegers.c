#include<stdio.h>
#include<math.h>
int main(){

	double principal = 1000.0, rate = .05, amount_d;
	int year = 1, one, two, thr, fou, fiv, six, amount;

	printf("%4s%21s\n", "Year", "Amount on deposit");

	amount = principal * pow(1.0 + rate, year);

	printf("%d\n", amount);

	for(year = 1; year <= 10; year++){

		amount_d = principal * pow(1.0 + rate, year);

		amount = amount_d*100;

		one = amount / 100000;
		two = (amount % 100000) / 10000;
		thr = ((amount % 100000) % 10000) / 1000;
		fou = (((amount % 100000) % 10000) % 1000) / 100;
		fiv = ((((amount % 100000) % 10000) % 1000) % 100) / 10;
		six = (((((amount % 100000) % 10000) % 1000) % 100) % 10) / 1;

		printf("%d%d%d%d.%d%d", one, two, thr, fou, fiv, six);

		printf("\tamount = %d\n", amount);

	}

	return 0;

}
