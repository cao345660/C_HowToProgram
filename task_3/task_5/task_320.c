//Простые проценты по судде рассчитыаются по формуле
//interest = principal * rate * days / 365
//В предыдущей формуле понимается, что rate является процентной ставкой за год
//и поэтому включает деление на 365(дней). Разработайте программу на С, которая
//будет вводить значения principal, rate и days для нескольких ссуд и будет вычислять
//и отображать на экране простые проценты по каждой ссуд, используя для этого 
//предыдущую формулу.

#include <stdio.h>

int main()
{
	float principal;
	float rate;
	float days;
	while(1)
	{
		printf("Enter the principal amount of the loan(-1, for exit): ");
		scanf("%f", &principal);
		if(-1 == principal)
		{
			break;
		}
		printf("Enter interest: ");
		scanf("%f", &rate);
		printf("Enter the term of the loan in days: ");
		scanf("%f", &days);
		printf("Dividends on common interest is $%.2f\n\n", principal * rate * days / 365 );
	}

	return 0;
}