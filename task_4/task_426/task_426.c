//��������� �������� p � ������� ������������ ����
//p = 4 - 4 / 3 + 4 / 5 - 4 / 7 + 4 / 9 - 4 / 11 + ...
//�������� �������, ������� ���������� �������� p, ����������������� ����� ������
//����� ����, ����� �������, ����� ������� � �.�. ������� ������ ����� ���� �����
//������������, ������ ��� �� ������� �������� 3.14? 3.141? 3.1415? 3.14159?

#include <stdio.h>

int main()
{
	float p = 4;
	unsigned int counter;
	float n = 3;

	for(counter = 0; counter < 10000; counter++)
	{
		p = p - (4 / n) + (4 / (n + 2));
		n += 4;
	}

	printf("p = %f\n", p);

	return 0;
}