#include<stdio.h>
int main(){

	int a_count = 0, b_count = 0, c_count = 0, d_count = 0;

	char grade = 'a';

	printf("Enter the letter grades. Enter the EOF character to end input.\n");
	//printf("%c\n", &grade);
	while((grade = getchar()) != EOF){

		scanf(" %c", &grade);

		if(grade == 'A' || grade == 'a'){

			a_count++;

		}else if(grade == 'B' || grade == 'b'){

			b_count++;

		}else if(grade == 'c' || grade == 'C'){

			c_count++;

		}else if(grade == 'D' || grade == 'd'){

			d_count++;

		}else if(grade != 'A' || grade != 'a' || grade != 'b' || grade != 'B' || 			grade != 'c' || grade != 'C' || grade != 'd'|| grade != 'D'){

		printf("Please type a valid grade.\n");

		}

	}

	printf("\nTotals for each letter grade are:\n");
	printf("A = %d\tB = %d\tC = %d\tD = %d\n", a_count, b_count, c_count, d_count);

}
