//�������� ���������, ������� ��������� � ������� ������� �������� ��� ����������
//����� �����. ������������, ��� ��������� ���������, ����������� � ������� scanf,
//�������� ����������� �������� 9999. �������� ������� ������������������� ����� ����
//������������������
// 10 8 11 7 9 9999
//�����������, ��� ������ ���� ��������� ������� �������� ��� ���� ��������,
//�������������� 9999.

#include <stdio.h>

int main()
{
	int number;
	int sum = 0;

	printf("Enter number: ");

	while(1)
	{
		scanf("%d", &number);
		if(9999 == number)
		{
			break;
		}
		sum +=number;
	}
	printf("Result: %d\n", sum);

	return 0;
}