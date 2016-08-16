#include <stdio.h>

int main()
{
	int counter = 5;
	printf("Counter: %d\n", counter);
	printf("Counter(--counter): %d\n", --counter);
	printf("Counter: %d\n", counter);
	printf("Counter(counter--): %d\n", counter--);
	printf("Counter: %d\n", counter);

	return 0;
}