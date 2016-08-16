#include <stdio.h>

int main()
{
	int a, b, c;

	printf("Input three different integers: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("Sum is %d\n", a + b + c);
	printf("Average is %d\n", (a + b + c) / 3);
	printf("Product is %d\n", a * b * c);

	if ( a < b && a < c )
	{
		printf("Smallest is %d\n", a);
		if ( b < c )
		{
			printf("Largest is %d\n", c);
		}
		if ( b > c )
		{
			printf("Largest is %d\n", b);
		}
	}
	if ( b < a && b < c )
	{
		printf("Smallest is %d\n", b);
		if ( a < c )
		{
			printf("Largest is %d\n", c);
		}
		if ( a > c )
		{
			printf("Largest is %d\n", a);
		}
	}
	if ( c < a && c < b )
	{
		printf("Smallest is %d\n", c);
		if ( a < b )
		{
			printf("Largest is %d\n", b);
		}
		if ( a > b )
		{
			printf("Largest is %d\n", a);
		}
	}

	return 0;
}