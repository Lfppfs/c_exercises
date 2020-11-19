#include<stdio.h>
int main(){
	int x, i, j;
	long y = 1;

	printf("Type the number for which you want to calculate powers: ");

	scanf("%d", &x);

	printf("Type the number of powers you want to calculate for the number %d: ", x);

	scanf("%d", &j);

	// using a for:
	for(i = 1; i <= j; i++){
		y = x*y;

		printf("%d\n", y);
	}

	// using a while
/*	i = 1;
	while(i <= j){
		y = x*y;
		i++;
		printf("%d\n", y);
	}
*/
	return 0;
}
