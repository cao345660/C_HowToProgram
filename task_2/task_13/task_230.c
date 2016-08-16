#include <stdio.h>

int main()
{
	int a, b, c, d, e, f;

	printf("Pls enter the number: ");
	scanf("%d", &a);

	f = (a % 100000) / 10000;
	e = (a % 10000) / 1000;
	d = (a % 1000) / 100;
	c = (a % 100) / 10;
	b = a % 10;
	printf("%d   ", f);
	printf("%d   ", e);
	printf("%d   ", d);
	printf("%d   ", c);
	printf("%d   \n", b);

	return 0;
}
