//�������� ���������, ������� ��������� � ������� ����� ������ ����� ����� �� 2 �� 30.

#include <stdio.h>

int main()
{
	int sum = 0;
	int c;
	
	for( c = 2; c <= 30; c += 2)
	{
		sum += c;
	}
	printf("Sum: %d\n", sum);
	
	return 0;
}