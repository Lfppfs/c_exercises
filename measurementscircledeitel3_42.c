#include<stdio.h>
int main(){

	float radius;

	printf("Type the radius of the circle: ");
	scanf("%f", &radius);

	printf("Diameter = %f\n", radius * 2);
	printf("Area = %f\n", 3.14159 * (radius * radius));
	printf("Circumference = %f\n", 2 * 3.14159 * radius);

	return 0;

}
