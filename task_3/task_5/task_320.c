//������� �������� �� ����� ������������� �� �������
//interest = principal * rate * days / 365
//� ���������� ������� ����������, ��� rate �������� ���������� ������� �� ���
//� ������� �������� ������� �� 365(����). ������������ ��������� �� �, �������
//����� ������� �������� principal, rate � days ��� ���������� ���� � ����� ���������
//� ���������� �� ������ ������� �������� �� ������ ����, ��������� ��� ����� 
//���������� �������.

#include <stdio.h>

int main()
{
	float principal;
	float rate;
	float days;
	while(1)
	{
		printf("Enter the principal amount of the loan(-1, for exit): ");
		scanf("%f", &principal);
		if(-1 == principal)
		{
			break;
		}
		printf("Enter interest: ");
		scanf("%f", &rate);
		printf("Enter the term of the loan in days: ");
		scanf("%f", &days);
		printf("Dividends on common interest is $%.2f\n\n", principal * rate * days / 365 );
	}

	return 0;
}