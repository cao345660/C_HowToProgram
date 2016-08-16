#include <stdio.h>

int main()
{
	int i;

	for(i = 0; i < 100; i++)
	{
		if( 0 == (i % 10))
		{
			printf("\n");
		}
		printf("*");
	}
	printf("\n");

	return 0;
}