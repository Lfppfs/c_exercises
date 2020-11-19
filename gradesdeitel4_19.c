#include<stdio.h>
int main(){

	int grade, mean, n;
	int aCount = 0, bCount = 0, cCount = 0, dCount = 0, eCount = 0,
	fCount = 0;

	printf("Type the grades or enter EOF character to end input.\n");

	while((grade = getchar()) != EOF){

		switch(grade){

			case 'a':
			case 'A':
				++aCount;
				++n;
				break;

			case 'b':
			case 'B':
				++bCount;
				++n;
				break;

			case 'c':
			case 'C':
				++cCount;
				++n;
				break;

			case 'd':
			case 'D':
				++dCount;
				++n;
				break;

			case 'e':
			case 'E':
				++eCount;
				++n;
				break;

			case 'f':
			case 'F':
				++fCount;
				++n;
				break;

			case '\n':
			case '\t':
			case ' ':
				break;

			default:
				printf("Incorrect input.\n");
				break;

		}

	}

	mean = (aCount * 10 + bCount * 8 + cCount * 6 + dCount * 4 + 
	eCount * 2 + fCount * 0) / n;

	printf("The mean grade is: %d\n", mean);

	return 0;

}
