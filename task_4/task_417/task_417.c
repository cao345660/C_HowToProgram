//В период экономического спада востребование денежного долга значительно затрудняется
//поэтому компании могут ограничивать предельные размеры кредитов своих клиентов,
//что бы не допустить разрастания их годовых к принятию счетов(денег, которые клиенты
//должны компании). В ответ на длительный спад некая компания урезала предельные 
//размеры кредитов своих клиентов наполовину. Таким образом, если данный клиент имел
//предельный размер кредита в $2000, теперь предельный размер кредита этого клиента
//равен $1000. Если клиент имел предельный размер кредита в $5000, теперь предельный
//размер кредита этого клиента равен $2500. Напишите программу, которая анализирует
//состояние кредита трех клиентов этой компании. Для каждого клиента вам известны:
//1. Номер счета клиента
//2. Предельный размер кредита до спада
//3. Текущий баланс клиента(т.е. сумма, которую клиент должен компании).
//Ваша программа должна вычислить и вывести на печать новое значение предельного
//размера кредита для каждого клиента и определить(и распечатать) список тех клиентов,
//текущие балансы которых превышают их новое значение предельного размера кредита.

#include <stdio.h>

int main()
{
	unsigned int acc_num, acc_num1, acc_num2, acc_num3;
	unsigned int credit, credit1, credit2, credit3;
	unsigned int duty, duty1, duty2, duty3;
	unsigned int counter;

	for(counter = 0; counter < 3; counter++)
	{
		printf("Enter account number %d client: ", counter + 1);
		scanf("%d", &acc_num);
		printf("Enter credit %d client: ", counter + 1);
		scanf("%d", &credit);
		printf("Enter duty %d client: ", counter + 1);
		scanf("%d", &duty);
		printf("\n");
		switch( counter )
		{
			case 0: credit1 = credit, acc_num1 = acc_num, duty1 = duty; break;
			case 1: credit2 = credit, acc_num2 = acc_num, duty2 = duty; break;
			case 2: credit3 = credit, acc_num3 = acc_num, duty3 = duty; break;
		}
	}

	if((credit1/2) < duty1)
	{
		printf("Account numer: %d\nNew credit: %d\nDuty: %d\nNew Credit > Duty!\n", acc_num1, credit1/2, duty1);
	}
	if((credit2/2) < duty2)
	{
		printf("Account numer: %d\nNew credit: %d\nDuty: %d\nNew Credit > Duty!\n", acc_num2, credit2/2, duty2);
	}
	if((credit3/2) < duty3)
	{
		printf("Account numer: %d\nNew credit: %d\nDuty: %d\nNew Credit > Duty!\n", acc_num3, credit3/2, duty3);
	}

	return 0;
}
