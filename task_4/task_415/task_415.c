//�������� ��������� ���������� �������� �������� �� ������� 4.6 ���, ����� ���
//��������� ���� ���� ��� ���������� ������ 5 ���������, 6 ���������, 7 ���������,
//8 ���������, 9 ��������� � 10 ���������. ��� ������������ ���������� ������
//����������� ���� for.
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
	double amount;		/* ����� �� ����� */
	double principal = 1000.0;		/* ��������� ������� */
	double rate;// = .05;		/* ������� ����� �������� */
	unsigned int year;		/* ������� ��� */

	/* ������� ��������� ������� ������� */
	printf("%4s%21s\n", "Year", "Amount on deposit");
	for(rate = .05; .1 >= rate; rate += .01)
	{
		/* ��������� ����� �� ����� ��� ������� �� 10 ��� */
		for(year = 1; year <= 10; year++)
		{
			/* ��������� ����� ����� ��� ������� ���� */
			amount = principal * pow(1.0 + rate, year);
			/* ������� ���� ������ ������� */

			printf("%4d%21.2f\n", year, amount);
		}
		printf("\n\n");
	}

	return 0;
}