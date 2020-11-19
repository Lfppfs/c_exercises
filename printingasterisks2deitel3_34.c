#include<stdio.h>
int main(){

	int sides, row, col;

	printf("Type the number of asterisks for the sides: ");
	scanf("%d", &sides);

	for(row = 1; row <= sides; row++){

		if(row == 1 || row == sides){

			for(col = 1; col <= sides; col++){

				printf("*");
//				printf("col = %d", col);
			}

		}else{

			for(col = 1; col <= sides; col++){

				if(col == 1 || col == sides){

					printf("*");
				}else{

					printf(" ");
				}
			}

		}

	printf("\n");

	}

	return 0;

}
