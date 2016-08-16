#include <stdio.h>

int main()
{
	int large = -2147483648;
	int morelarge = 0;
	int counter = 0;
	int number = 0;
	int ary[10];

	printf("Enter first number: ");
	scanf("%d", &number);
	morelarge = number;
	while(9 > counter)
	{
		int result = 0;
		int i;
		printf("Enter next number: ");
		scanf("%d", &number);
		ary[counter] = number;
		for(i = 0; i <= counter-1; i++)
		{
			if(ary[i] == number)
			{
				result = 1;
				break;
			}
		}
		if(result)
		{
			printf("This number has been entered\n");
			continue;
		}
		if(large < number)
		{
			if(morelarge < number)
			{
				large = morelarge;
				morelarge = number;
			}
			else
			{
				large = number;
			}
		}
		counter++;
	}
	printf("More Largest: %d\n", morelarge);
	printf("Largest: %d\n", large);

	return 0;
}