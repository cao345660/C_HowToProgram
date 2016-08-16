#include <stdio.h>

int main()
{
	int a, b, c;

	printf("Pls enter 'a' and 'b': ");
	scanf("%d%d", &a, &b);

	c = a % b;
	if(!c)
	{
		printf("'a' multiples of 'b'\n");
	}
	else
	{
		printf("'a' not multiples of 'b'\n");
	}

	return 0;
}