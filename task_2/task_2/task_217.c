#include <stdio.h>

int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	printf("1, 2, 3, 4\n");
	printf("%d, %d, %d, %d\n", a, b, c, d);
	printf("%d, ", a);
	printf("%d, ", b);
	printf("%d, ", c);
	printf("%d\n", d);

	return 0;
}