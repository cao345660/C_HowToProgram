#include <stdio.h>

int main()
{
	int number = 1;
	int rankH1 = 0;
	int rankH2 = 0;
	int rankL1 = 0;
	int rankL2 = 0;

	while(number)
	{
		printf("Enter the number of the format XXXXX(else 0): ");
		scanf("%d", &number);
		if(!number)
		{
			break;
		}
		if( number < 10000 || number > 99999)
		{
			printf("Enter correct number format XXXXX!!!\n");
			continue;
		}
		rankH1 = number / 10000;
		rankH2 = number / 1000;
		rankH2 %= 10;
		rankL1 = number % 10;
		rankL2 = number % 100;
		rankL2 /= 10;
		if((rankH1 == rankL1) && (rankH2 == rankL2))
		{
			printf("That polindrom!\n");
		}
		else
		{
			printf("That no polindrom!\n");
		}
	}

	return 0;
}