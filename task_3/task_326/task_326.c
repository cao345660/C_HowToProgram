#include <stdio.h>

int main()
{
	int counter = 3;

	printf("A \tA+2 \tA+4 \tA+6\n");
	while(15 >= counter)
	{
		printf("%d \t %d \t %d \t %d\n", counter, counter + 2, counter + 4, counter + 6);
		counter += 3;
	}

	return 0;
}