#define pi 3.14159

#include <stdio.h>

int main()
{
	float r;

	printf("Enter radius of the circle: ");
	scanf("%f", &r);
	printf("Diameter of a circle: %.2f\n", r * 2);
	printf("Area of a circle: %.2f\n", pi * r * r);
	printf("Circumference: %.2f\n", pi * r* 2);

	return 0;
}