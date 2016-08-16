//Измените программу так, что бы для вычисления сложных процентов она использовала
//целые числа. (Подсказка: обработайте все денежные суммы в виде целочисленных
//значений центов. Затем "разбейте результат на доллары и центы, используя для этого
//соответственно операции деления и взятия по модулю. Вставьте десятичную точку.)
//
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	double amount;		/* сумма на счете */
//	double principal = 1000.0;		/* начальный капитал */
//	double rate = .05;		/* годовая самка процента */
//	unsigned int year;		/* счетчик лет */
//
//	/* вывести заголовки колонок таблицы */
//	printf("%4s%21s\n", "Year", "Amount on deposit");
//
//	/* вычислить сумму на счете для каждого из 10 лет */
//	for(year = 1; year <= 10; year++)
//	{
//		/* вычислить новую сумму для каждого года */
//		amount = principal * pow(1.0 + rate, year);
//		/* вывести одну строку таблицы */
//
//		printf("%4d%21.2f\n", year, amount);
//	}
//
//	return 0;
//}

#include <stdio.h>
#include <math.h>

int main()
{
	//double amount;		/* сумма на счете */
	//double principal = 1000.0;		/* начальный капитал */
	//double rate = .05;		/* годовая самка процента */
	unsigned int amount1;
	unsigned int amount2;
	unsigned int principal = 1000;
	unsigned int rate = 105;
	unsigned int year;		/* счетчик лет */
	unsigned int power;
	unsigned int counter;

	/* вывести заголовки колонок таблицы */
	printf("%4s%21s\n", "Year", "Amount on deposit");

	/* вычислить сумму на счете для каждого из 10 лет */
	for(year = 1; year <= 10; year++)
	{
		/* вычислить новую сумму для каждого года */
		power = 1000;
		for(counter = 1; counter <= year; counter++)
		{
			power *= rate;
			while(10000000 < power)
			{
				power /= 10;
			}
			
		}
		while(10000 < power)
		{
			if(100000 < power && 1000000 > power)
			{
				amount2 = power % 100;
			}
			power /= 10;
		}
		
		/* вывести одну строку таблицы */
		printf("%4d%21d,%02d\n", year, power, amount2);
	}

	return 0;
}