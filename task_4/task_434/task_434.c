//Ќапишите программу, котора€ выводит таблицу двоичных, восьмеричных и шестнадцатиричных
//эквивалентов дес€тичных чисел в диапазоне от 1 до 256.

#include <stdio.h>

int main()
{
	int number;
	int basic_n;
	int result;
	int mod;
	int mul;

	for(number = 1, result = 0; number < 256; number++)
	{
		printf("%d\t%o\t%X\t", number, number, number);
		for(basic_n = number, result = 0, mul = 1; basic_n > 0; mul *= 10)			
		{
			mod = (basic_n % 2) * mul;
			result += mod;
			basic_n /= 2;
		}
		printf("%d", result);
		printf("\n");
	}

	return 0;
}