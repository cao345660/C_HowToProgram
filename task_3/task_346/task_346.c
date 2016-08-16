#include <stdio.h>

void encryption();
void decryption();

int main()
{
	int menu;
	while(1)
	{
		printf(" Main menu:\n  1.Encryption\n  2.Decryption\n\n Enter 1/2: ");
		scanf("%d", &menu);
		if(menu == 1)
		{
			encryption();
		}
		else if(menu == 2)
		{
			decryption();
		}
		else
		{
			printf("ERROR: !!!Enter correct number(1/2)!!!\n\n");
		}
	}

	return 0;
}

void encryption()
{
	int counter = 0;
	int number;
	int mid;
	int mod = 10;
	int div = 1;
	int result = 0;

	printf("\n Encryption...\n\n");
	printf("Enter number format XXXX: ");
	scanf("%d", &number);
	while(number >= div)
	{
		mid = number % mod;
		mid /= div;
		mid += 7;
		mid %= 10;
		mod *= 10;
		div *= 10;
		if(0 == counter)
		{
			mid *= 100;
			result += mid;
		}
		else if(1 == counter)
		{
			mid *= 1000;
			result += mid;
		}
		else if(2 == counter)
		{
			result += mid;
		}
		else if(3 == counter)
		{
			mid *= 10;
			result += mid;
		}
		counter++;
	}
	printf("Result: %d\n\n", result);
}

void decryption()
{
	int counter = 0;
	int number;
	int mid;
	int mod = 10;
	int div = 1;
	int result = 0;

	printf("\n Decryption...\n");
	printf("Enter number format XXXX: ");
	scanf("%d", &number);
	while(number >= div)
	{
		mid = number % mod;
		mid /= div;
		mid = mid + 10 - 7;
		mid %= 10;
		mod *= 10;
		div *= 10;
		if(0 == counter)
		{
			mid *= 100;
			result += mid;
		}
		else if(1 == counter)
		{
			mid *= 1000;
			result += mid;
		}
		else if(2 == counter)
		{
			result += mid;
		}
		else if(3 == counter)
		{
			mid *= 10;
			result += mid;
		}
		counter++;
	}
	printf("Result: %d\n\n", result);
}