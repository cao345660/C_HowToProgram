//�������� ��������� ���, ��� �� ��� ���������� ������� ��������� ��� ������������
//����� �����. (���������: ����������� ��� �������� ����� � ���� �������������
//�������� ������. ����� "�������� ��������� �� ������� � �����, ��������� ��� �����
//�������������� �������� ������� � ������ �� ������. �������� ���������� �����.)
//
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	double amount;		/* ����� �� ����� */
//	double principal = 1000.0;		/* ��������� ������� */
//	double rate = .05;		/* ������� ����� �������� */
//	unsigned int year;		/* ������� ��� */
//
//	/* ������� ��������� ������� ������� */
//	printf("%4s%21s\n", "Year", "Amount on deposit");
//
//	/* ��������� ����� �� ����� ��� ������� �� 10 ��� */
//	for(year = 1; year <= 10; year++)
//	{
//		/* ��������� ����� ����� ��� ������� ���� */
//		amount = principal * pow(1.0 + rate, year);
//		/* ������� ���� ������ ������� */
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
	//double amount;		/* ����� �� ����� */
	//double principal = 1000.0;		/* ��������� ������� */
	//double rate = .05;		/* ������� ����� �������� */
	unsigned int amount1;
	unsigned int amount2;
	unsigned int principal = 1000;
	unsigned int rate = 105;
	unsigned int year;		/* ������� ��� */
	unsigned int power;
	unsigned int counter;

	/* ������� ��������� ������� ������� */
	printf("%4s%21s\n", "Year", "Amount on deposit");

	/* ��������� ����� �� ����� ��� ������� �� 10 ��� */
	for(year = 1; year <= 10; year++)
	{
		/* ��������� ����� ����� ��� ������� ���� */
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
		
		/* ������� ���� ������ ������� */
		printf("%4d%21d,%02d\n", year, power, amount2);
	}

	return 0;
}