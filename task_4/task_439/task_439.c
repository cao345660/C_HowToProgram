//������� � ����� ������, ����� ������� �� ����� �� ������ �� ����� ����� ��������
//continue � �������� ��� ��������� ����������� ������������. ��������� �������������
//����� ����� ��� ���������� ��������� continue �� ���������.

//#include <stdio.h>
//
//int main()
//{
//	int x;
//
//	for ( x = 1; x <= 10; x++ )
//	{
//		if( x == 5 )
//		{
//			continue;
//		}
//		printf("%d ", x);
//	}
//
//	puts("\nUsed continue to skip priting value 5");
//
//	return 0;
//}

#include <stdio.h>

int main()
{
	int x;

	for ( x = 1; x <= 10; x++ )
	{
		if( x != 5 )
		{
			printf("%d ", x);
		}
	}

	puts("\nDon't used continue to skip priting value 5");

	return 0;
}