//�������� ���������, ������� ������� ��������� ������ � ���� �����. �� ������ 
//������������ ��������� printf, ������� ������� ���� ���� ��������� (*), ���� ����
//������. �������������� ���������� �������������� ���� ����������(����������� ���������
//�������� for) � ������������� ����� ���������� printf.
//    *
//   ***
//  *****
// *******
//*********
// *******
//  *****
//   ***
//    *

#include <stdio.h>

int main()
{
	int counter = 0;
	int counter_space;
	int counter_d;

	for(; counter < 9; counter++)
	{
		switch(counter)
		{
			case(0): counter_space = 4; break;
			case(1): counter_space = 3; break;
			case(2): counter_space = 2; break;
			case(3): counter_space = 1; break;
			case(4): counter_space = 0; break;
			case(5): counter_space = 1; break;
			case(6): counter_space = 2; break;
			case(7): counter_space = 3; break;
			case(8): counter_space = 4; break;
		}
		for(; 0 < counter_space; counter_space--)
		{
			printf(" ");
		}
		switch(counter)
		{
			case(0): counter_d = 1; break;
			case(1): counter_d = 3; break;
			case(2): counter_d = 5; break;
			case(3): counter_d = 7; break;
			case(4): counter_d = 9; break;
			case(5): counter_d = 7; break;
			case(6): counter_d = 5; break;
			case(7): counter_d = 3; break;
			case(8): counter_d = 1; break;
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