#include<stdio.h>
int main(){

	int i;

	printf("Decimal value\tRoman numeral\n");

	for(i = 1; i <= 100; i++){

		if(i / 10 == 0){

			if(i % 10 == 1)
				printf ("%d\tI", i);
			if(i % 10 == 2)
				printf ("%d\tII", i);
			if(i % 10 == 3)
				printf ("%d\tIII", i);
			if(i % 10 == 4)
				printf ("%d\tIV", i);
			if(i % 10 == 5)
				printf ("%d\tV", i);
			if(i % 10 == 6)
				printf ("%d\tVI", i);
			if(i % 10 == 7)
				printf ("%d\tVII", i);
			if(i % 10 == 8)
				printf ("%d\tVIII", i);
			if(i % 10 == 9)
				printf ("%d\tIX", i);
			if(i % 10 == 0)
				printf ("%d\tX", i);

		}

		if(i / 10 != 0){

			if(i / 10 == 1)
				printf ("%d\tX", i);
			if(i / 10 == 2)
				printf ("%d\tXX", i);
			if(i / 10 == 3)
				printf ("%d\tXXX", i);
			if(i / 10 == 4)
				printf ("%d\tXL", i);
			if(i / 10 == 5)
				printf ("%d\tL", i);
			if(i / 10 == 6)
				printf ("%d\tLX", i);
			if(i / 10 == 7)
				printf ("%d\tLXX", i);
			if(i / 10 == 8)
				printf ("%d\tLXXX", i);
			if(i / 10 == 9)
				printf ("%d\tXC", i);
			if(i / 10 == 0)
				printf ("%d\tC", i);
			

			if(i % 10 == 1)
				printf ("I");
			if(i % 10 == 2)
				printf ("II");
			if(i % 10 == 3)
				printf ("III");
			if(i % 10 == 4)
				printf ("IV");
			if(i % 10 == 5)
				printf ("V");
			if(i % 10 == 6)
				printf ("VI");
			if(i % 10 == 7)
				printf ("VII");
			if(i % 10 == 8)
				printf ("VIII");
			if(i % 10 == 9)
				printf ("IX");
			if(i % 10 == 0)
				printf ("X");


		}

		printf("\n");

	}

	return 0;

}
