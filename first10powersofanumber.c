#include<stdio.h>
int main(){
	int x, i, j;
	long y = 1;

		printf("Type the number for which you want the first 10 powers: ");

		scanf("%d", &x);

		for(i = 1; i <= 10; i++){
			y = x*y;

			printf("%d\n", y);
		}

				
return 0;
}
