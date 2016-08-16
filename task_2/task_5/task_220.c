#include <stdio.h>

int main()
{
	int r;

	printf("Pls enter rad: ");
	scanf("%d", &r);
	printf("Diameter: %f\n", r * 2.0);
	printf("Perimeter: %f\n", 2 * 3.141559 * r);
	printf("Area: %f\n", 3.141559 * (r * r) );

	return 0;
}