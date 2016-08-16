#include <stdio.h>

int main()
{
	int counter = 10;
	int number = 0;
	int largest = 0;

	printf("Enter first number: ");
	scanf("%d", &number);
	largest = number;
	counter--;
	while(counter)
	{
		printf("Enter next number: ");
		scanf("%d", &number);
		if(largest < number)
		{
			largest = number;
		}
		counter--;
	}
	printf("Largest: %d\n", largest);

	return 0;
}