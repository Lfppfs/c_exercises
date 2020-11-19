#include<stdio.h>
int main(){
	float total = 0;

	float num = 0, price = 0;

	int prod;

	do{

		printf("Type the product number (type 0 for terminating the program): ");
		scanf("%d", &prod);

		if(prod == 0){
			break;
		}

		printf("Type the quantity sold: ");
		scanf("%f", &num);

		switch(prod){

			case 0:
				break;

			case 1:
				price = 2.98*num;
				break;

			case 2:
				price = 4.5*num;
				break;

			case 3:
				price = 9.98*num;
				break;

			case 4:
				price = 4.49*num;
				break;

			case 5:
				price = 6.87*num;
				break;

			default:
				printf("Incorrect number entered. Enter a new number.\n");
				break;

		}

		total += num * price;

	}while(prod != 0);

	printf("\nThe total retail value was: %f\n", total);

	return 0;

}
