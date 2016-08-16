#include <stdio.h>

int main()
{
	int a, b;

	printf("Pls enter 'a': ");
	scanf("%d", &a);
	printf("Pls enter 'b': ");
	scanf("%d", &b);

	if(a > b)
	{
		printf("A(%d) is larger\n", a);
	}
	if(a < b)
	{
		printf("B(%d) is larger\n", b);
	}
	else
	{
		printf("These number are equal\n");
	}

	return 0;
}