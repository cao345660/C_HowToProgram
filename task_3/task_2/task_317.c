#include <stdio.h>

int main()
{
	float cog = 0.0;
	float dt;
	float mean = 0.0;
	float counter = 0.0;
	while(1)
	{
		printf("Enter the consumption of gasoline(-1 for exit): ");
		scanf("%f", &cog);
		if(0 == cog)
		{
			printf("Error: You can't divide by zero!!!\n\n");
			continue;
		}
		if(-1 == cog)
		{
			break;
		}
		++counter;
		printf("Enter the distance traveled: ");
		scanf("%f", &dt);
		printf("Consumption miles/gallon: %f\n\n", dt /= cog);
		mean += dt;
	}
	if(0 == counter)
	{
		printf("\nError: No entered data!!!\n");
	}
	else
	{
		printf("\nMean consumption miles/gallon: %f\n", mean /= counter);
	}

	return 0;
}