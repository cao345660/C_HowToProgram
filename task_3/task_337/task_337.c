#include <stdio.h>

int main()
{
	int counter = 0;
	
	while(counter < 3000001)
	{
		if((counter == 1000000) || (counter == 2000000) || (counter == 3000000))
		{
			printf("counter = %d\n", counter);	
		}
		counter++;
	}

	return 0;
}