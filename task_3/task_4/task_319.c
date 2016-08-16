#include <stdio.h>

int main()
{
	float sales;
	while(1)
	{
		printf("Enter the amount of sales in dollars(-1, for exit): ");
		scanf("%f", &sales);
		if(-1 == sales)
		{
			break;
		}
		printf("Salary: $%.2f\n\n", 200.0 + (sales * 0.09));
	}

	return 0;
}