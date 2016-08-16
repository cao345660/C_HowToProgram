#include <stdio.h>

int main()
{
	int a, b;

	printf("Pls enter 'a': ");
	scanf("%d", &a);

	b = a % 2;
	if(!b)
	{
		printf("'a' is even!\n");
	}
	else
	{
		printf("'a' is odd!\n");
	}

	return 0;
}