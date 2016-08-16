#include <stdio.h>

int main()
{
	unsigned int number;
	unsigned int mid = 0;
	unsigned int mod = 10;
	unsigned int div = 1;
	unsigned int counter = 1;
	unsigned int result = 0;

	printf("Enter number: ");
	scanf("%d", &number);
	while( number >= div )
	{
		mid = number % mod;
		mid /= div;
		if(mid == 1)
		{
			result += counter;
		}
		mod *= 10;
		div *= 10;
		counter *= 2;
	}
	printf("result = %d\n", result);

	return 0;
}