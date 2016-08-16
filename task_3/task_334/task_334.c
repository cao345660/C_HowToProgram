#include <stdio.h>

int main()
{
	int size = 0;
	int i;
	int j;

	printf("Enter size of the square(1-20): ");
	scanf("%d", &size);
	for(i = 0; i < size; i++)
	{
		if((i == 0) || (i == (size-1)))
		{
			for(j = 0; j < size; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		else
		{
			for(j = 0; j < size; j++)
			{
				if((j == 0) || (j == (size-1)))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}