#include <stdio.h>
int main(){
	int x, y;

	printf("Type any number\n");

	scanf("%d", &x);

	y = x;

	printf("You typed %d\n", x);

	printf("Predecrementing: --x == %d: %d\n", y, --x == y);
	printf("x == 9: %d\n",	x == (y - 1));

	x++;

	printf("Postdecrementing: x-- > %d: %d\n", y, x-- == y);
	printf("x == 9: %d\n",	x == (y - 1));
//	printf("Predecrementing will turn %d into %d, and postdecrementing will turn %d into %d\n",
//	x, , x--, x);

	return 0;
}
