//�������� ���������, ������� ��������� � ������� ������������ �������� ����� �����
//�� 1 �� 15.

#include <stdio.h>

int main()
{
	int c;
	int mul = 1;

	for(c = 1; c <=15; c += 2)
	{
		mul *= c;
	}
	printf("Result: %d\n", mul);

	return 0;
}