//�������� ���������, ������� ������� ���������� �� ���������� ����� �����.
//������������, ��� ������ ��������� �������� ���������� ���������� ����������
//��������.

#include <stdio.h>

int main()
{
	int number;
	int low = 0;
	int counter;

	printf("Enter counter: ");
	scanf("%d", &counter);
	printf("Enter number(%d): ", counter);
	scanf("%d", &low);
	counter--;

	while(counter)
	{
		scanf("%d", &number);
		if(number < low)
		{
			low = number;
		}
		counter--;
	}
	printf("Result: %d\n", low);

	return 0;
}