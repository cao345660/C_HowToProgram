#include <stdio.h>

int main()
{
	int i = 0;
	int flag = 0;

	while(8 > i)
	{
		int j = 0;

		if(flag)
		{
			printf(" ");
			flag--;
		}
		else
		{
			flag++;
		}
		while(8 > j)
		{
				printf("* ");
				j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}