//Напишите программу, которая вводит год в диапазоне от 1994 до 1999 и использует
//повторение с циклом for для печати сжатого, аккуратного календаря. Обратите внимание
//на високосные года.

#include "stdio.h"

int main()
{
	int year;
	int month_number;
	int day_extraweek;
	int day_in_month;
	int day;
	int day_in_week;

	for(;;)
	{
		begin:
		printf("Enter year(1994-1999):");
		scanf("%d", &year);
		if( (year < 1994) || (year > 1999) )
		{
			printf("Pls, enter correct year: 1994-1999\n\n");
			goto begin;
		}

		switch(year)										//1 - mondey; 7 - sunday;
		{
			case(1994): day_extraweek = 6; break;
			case(1995): day_extraweek = 7; break;
			case(1996): day_extraweek = 1; break;
			case(1997): day_extraweek = 3; break;
			case(1998): day_extraweek = 4; break;
			case(1999): day_extraweek = 5; break;
		}

		for(month_number = 1, day = 1; month_number <= 12; month_number++)
		{
			switch(month_number)
			{
				case (1): printf("January:\n"); day_in_month = 31; break;
				case (3): printf("March:\n"); day_in_month = 31; break;
				case (5): printf("May:\n"); day_in_month = 31; break;
				case (7): printf("July:\n"); day_in_month = 31; break;
				case (8): printf("August:\n"); day_in_month = 31; break;
				case (10): printf("October:\n"); day_in_month = 31; break;
				case (12): printf("December:\n"); day_in_month = 31; break;
					
				case (4): printf("April:\n"); day_in_month = 30; break;
				case (6): printf("June:\n"); day_in_month = 30; break;
				case (9): printf("September:\n"); day_in_month = 30; break;
				case (11): printf("November:\n"); day_in_month = 30; break;
				case (2):
					if(year == 1996)
					{
						printf("February:\n");
						day_in_month = 29;
						break;
					}
					else
					{
						printf("February:\n");
						day_in_month = 28;
						break;
					}
				default: printf("Error: incorrect month_number;\n"); break;
			}

			printf("m\tt\tw\tf\tf\ts\ts\n");
			day_in_week = 7 - day_extraweek;
			for(;day_extraweek > 1; day_extraweek--)
			{
				printf(" \t");
			}
			for(day = 1; day_in_month > 0; day_in_month--, day++, day_in_week--)
			{
				printf("%d\t", day);
				if(day_in_week == 0)
				{
					printf("\n");
					day_in_week = 7;
				}
			}

			day_extraweek = 7 - day_in_week;
			printf("\n");
		}
	}

	return 0; //!!!я тебя люблю!!!
}