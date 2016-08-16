//Измените программу, которую вы написали в упражнении 4.31, что бы она считывала
//нечетное число в диапазоне от 1 до 19 для заданиия количества строк в ромбе. Затем
//ваша программа должна отображать на экране ромб соответствующего размера.

#include <stdio.h>

int main()
{
	int number = 0;
	int half_num;
	int counter;
	int counter_space;
	int counter_d;

	while(1)
	{
		printf("Enter number(1-19): ");
		scanf_s("%d", &number);
		if( (number % 2) == 1 )
		{
			break;
		}
		printf("ERR: Pls enter odd number!\n\n");
	}
	
	printf("\n");
	half_num = number / 2;

	for(counter = 0; counter <= half_num; counter++)
	{
		switch(counter)
		{
			case(0): counter_space = half_num; break;
			case(1): counter_space = half_num - 1; break;
			case(2): counter_space = half_num - 2; break;
			case(3): counter_space = half_num - 3; break;
			case(4): counter_space = half_num - 4; break;
			case(5): counter_space = half_num - 5; break;
			case(6): counter_space = half_num - 6; break;
			case(7): counter_space = half_num - 7; break;
			case(8): counter_space = half_num - 8; break;
			case(9): counter_space = half_num - 9; break;
		}
		for(; 0 < counter_space; counter_space--)
		{
			printf(" ");
		}
		switch(counter)
		{
			case(0): counter_d = counter + 1; break;
			case(1): counter_d = counter + 2; break;
			case(2): counter_d = counter + 3; break;
			case(3): counter_d = counter + 4; break;
			case(4): counter_d = counter + 5; break;
			case(5): counter_d = counter + 6; break;
			case(6): counter_d = counter + 7; break;
			case(7): counter_d = counter + 8; break;
			case(8): counter_d = counter + 9; break;
			case(9): counter_d = counter + 11; break;
		}
		for(; 0 < counter_d; counter_d--)
		{
			printf("*");
		}
		printf("\n");
	}

	for(counter = 1; counter <= half_num; counter++)
	{
		counter_space = counter;
		for(; 0 < counter_space; counter_space--)
		{
			printf(" ");
		}
		switch(counter)
		{
			case(1): counter_d = number - 2; break;
			case(2): counter_d = number - 4; break;
			case(3): counter_d = number - 6; break;
			case(4): counter_d = number - 8; break;
			case(5): counter_d = number - 10; break;
			case(6): counter_d = number - 12; break;
			case(7): counter_d = number - 14; break;
			case(8): counter_d = number - 16; break;
			case(9): counter_d = number - 18; break;
		}
		for(; 0 < counter_d; counter_d--)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n");

	return 0;
}