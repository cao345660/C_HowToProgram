#include <stdio.h>

int main()
{
	int counter = 1;
	int flag = 0;
	while(counter)
	{
		if(0 == flag)
		{
			printf("%d", counter);
			counter++;
		}
		if(1 == flag)
		{
			printf("%d   ", counter);
			counter++;
		}
		if(10 == counter)
		{
			if(flag)
			{
				break;
			}
			counter = 1;
			flag = !flag;
		}
	}

	return 0;
}