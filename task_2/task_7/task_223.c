#include <stdio.h>

int main()
{
	int a, b, c, d, e;

	printf("Enter 5 number: ");
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	if(a <= b && a <= c && a <= d && a <= e)
	{
		printf("Smallest is %d\n", a);
	}
	if(b < a && b <= c && b <= d && b <= e)
	{
		printf("Smallest is %d\n", b);
	}
	if(c < b && c < a && c <= d && c <= e)
	{
		printf("Smallest is %d\n", c);
	}
	if(d < b && d < c && d < a && d <= e)
	{
		printf("Smallest is %d\n", d);
	}
	if(e < b && e < c && e < d && e < a)
	{
		printf("Smallest is %d\n", e);
	}

	if(a >= b && a >= c && a >= d && a >= e)
	{
		printf("Largest is %d\n", a);
	}
	if(b > a && b >= c && b >= d && b >= e)
	{
		printf("Largest is %d\n", b);
	}
	if(c > b && c > a && c >= d && c >= e)
	{
		printf("Largest is %d\n", c);
	}
	if(d > b && d > c && d > a && d >= e)
	{
		printf("Largest is %d\n", d);
	}
	if(e > b && e > c && e > d && e > a)
	{
		printf("Largest is %d\n", e);
	}

	return 0;
}