#include <stdio.h>

int main()
{
	int counter = 1;
	printf("N \t10*N \t100*N \t1000*N\n");
	while( 11 > counter )
	{
		printf("%d \t %d \t %d \t %d\n", counter, counter * 10, counter * 100,
																	counter * 1000);
		counter++;
	}

	return 0;
}