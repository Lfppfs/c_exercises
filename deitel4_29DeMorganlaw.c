#include<stdio.h>
int main(){

	int x = 8, y = 3;

	printf("%d == %d\n", !(x && y), (!x || !y));
	printf("%d == %d\n", !(x < 5) && !(y >= 7), !(x < 5 || y >= 7));
	printf("%d == %d\n", !("a" == "b") || !("g" != "h"), !("a" == "b" && "g" != "h"));
	printf("%d == %d\n", !((x <= 8) && !(y > 2)), !(x <= 8) || (y > 2));
	printf("%d == %d\n", !((x > 4) || (y <= 6)), !((x > 4) || (y <= 6)));

	return 0;

}
