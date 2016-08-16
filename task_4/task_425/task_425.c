//¬ыведите таблицу, состо€щую из дес€тичного, двоичного, восьмеричного и 
//шестнадцатеричного эквивалентов.

#include <stdio.h>

int main()
{
	int counter = 0;
	int bin_c;
	int binary = 0;
	int step;
	int result;
	int mid = 0;

	while(counter < 50)
	{
		bin_c = counter;
		step = 1;
		result = 0;
		while(bin_c)
		{
			mid = bin_c % 2;
			bin_c /= 2;
			result += mid * step;
			step *= 10;
		}
		//printf("%d", result);
		printf("%6d\t   %o\t%d\t%x\n", result, counter, counter, counter);
		counter++;
	}

	return 0;
}