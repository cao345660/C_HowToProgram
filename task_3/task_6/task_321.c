#include <stdio.h>

int main()
{
	float hours;
	float rate;
	float salary;
	while(1)
	{
		printf("Enter # the spent hours(-1, for exit): ");
		scanf("%f", &hours);
		if(-1 == hours)
		{
			break;
		}
		printf("Enter the employee's hourly rate($00.00): ");
		scanf("%f", &rate);
		if((40.0 >= hours) && (hours >= 0))
		{
			salary = rate * hours;
		}
		else if(40 < hours)
		{
			salary = (rate * 40) + rate * 1.5 * (hours - 40);
		}
		else
		{
			printf("Error: Incorrectly input!!!\n\n");
			continue;
		}
		printf("Salary is $%.2f\n\n", salary);
	}

	return 0;
}