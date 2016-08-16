#include <stdio.h>

void task_a();
void task_b();
void task_c();

int main()
{
	int menu;
	while(1)
	{
		printf(" Main menu:\n  1.task_a\n  2.task_b\n  3.task_c\n  4.Exit\n\n Enter 1/2/3/4: ");
		scanf("%d", &menu);
		if(1 == menu)
		{
			task_a();
		}
		else if(2 == menu)
		{
			task_b();
		}
		else if(3 == menu)
		{
			task_c();
		}
		else if(4 == menu)
		{
			break;
		}
		else
		{
			printf("ERROR: !!!Enter correct number(1/2/3/4)!!!\n\n");
		}
	}

	return 0;
}

void task_a()
{
	int n;
	int mid;
	
	while(1)
	{
		printf("\nEnter n (n > 0): ");
		scanf("%d", &n);
		if( 0 < n )
		{
			mid = (n - 1);
			while(1 != mid)
			{
				n *= mid;
				mid--;
			}
			break;
		}
		else if(0 == n)
		{
			n = 1;
			break;
		}
		else
		{
			printf("ERROR: n >= 0\n\n");
			continue;
		}
	}
	printf("n! = %d\n\n", n);
}

void task_b()
{
	float n = 1;
	float c = 1;
	float e = 10;
	float mid;
	float result = 0;

	while( c <= (e + 1) )
	{
		result += n;
		n = c;
		mid = (n - 1);
		while(1 <= mid)
		{
			n *= mid;
			mid--;
		}
		n = 1 / n;
		c++;
	}

	printf(" e = %f\n\n", result);
}

void task_c()
{
	float c = 1;
	float n = 1;
	float e = 1;
	float mid_x = 1;
	float mid_f = 1;
	float result = 1;
	float x;
	float x_pow = 1;
	
	while(1)
	{
		printf("\nEnter x (x >= 0): ");
		scanf("%f", &x);
		if( 0 < x )
		{
			while(n <= 20)
			{
				mid_x *= x;
				c = n;
				mid_f = 1;

				while(1 < c)
				{
					mid_f *= (c);
					c--;
				}
				e = mid_x / mid_f;
				n++;
				result += e;
			}
			break;
		}
		else
		{
			printf("ERROR: n >= 0\n\n");
			continue;
		}
	}
	printf(" e^x = %f\n\n", result);
}

//e^x = 1 + ( x^1 / 1! ) + ( x^2 / 2! ) + ( x^3 / 3!) + ...
//n! = n * ( n - 1 ) * ( n - 2 ) * ... * 1