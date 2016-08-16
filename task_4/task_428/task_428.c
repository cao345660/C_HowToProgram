//Компания платит своим служащим как админстраторам(это те, кто получает фиксированную
//еженедельную зарплату), работникам с почасовой оплатой(те, кто получает фиксированную
//почасовую оплату за первые 40 отработанных часов и "полуторную", т.е. превышающую в
//1.5 раз их почасовую, оплату за сверхурочные часы работы), работникам с коммисионным
//вознагрождением(те, кто получает $250 плюс 5,7% от их валовых еженедельных продаж) и
//работникам со сдельной оплатой труда(те, кто получает фиксированную сумму денег за
//каждую единицу произведенной ими продукции, - каждый сдельщик в этой компании работает)
//только с одной разновидностью продукции). Напишите программу для расчета еженедельной
//зарплаты каждого служащего. Вам известно заранее количество служащих. Служащий каждой
//из групп имеет собственный код оплаты: администраторы имеют код оплаты 1, работники с
//почасовой оплатой имеют код 2, работники с коммисионным вознагрождением имеют код
//оплаты 3 и работники со сдельной оплатой труда имеют код 4. Используйте оператор 
//switch для расчета зарплаты каждого служащего в зависимости от его кода. Внутри
//оператора switch попросите пользователя(т.е. клерка, рассчитывающего зарплату) ввести
//соответствующие данные, которые потребуются вашей программе для расчета зарплаты
//каждого служащего, исходя из его кода оплаты.

#include <stdio.h>

int main()
{
	int   choice = 5;
	float hour_hour;
	float admin_salary = 0;
	float admin_cout = 5;
	float hour_salary;
	float hour_cout = 4;
	float hour_sum;
	float comis_sales;
	float comis_cout = 3;
	float piece_salary;
	float piece_parts;
	float piece_cout = 2;
	float piece_sum;

	while(choice)
	{
		printf("Forms of payment:\n 1.Admin\n 2.Hour\n 3.Comis\n 4.Piece\n 0.Exit\n");
		printf("Please select payment: ");
		scanf("%d", &choice);
		switch(choice)
		{
			case(1):
				{
				printf("\nEnter salary: ");
				scanf("%f", &admin_salary);
				printf("One employee receives a salary: %.2f\n", admin_salary);
				printf("All employees receive salary(%.0f): %.2f\n\n", admin_cout, admin_salary * admin_cout);
				break;
				}
			case(2):
				{
					int i;
					hour_sum = 0;
					
					for(i = 1; i <= hour_cout; i++)
					{
						printf("\nEnter the hours worked %d working: ", i);
						scanf("%f", &hour_hour);
						printf("Enter salary %d working(per hour): ", i);
						scanf("%f", &hour_salary);
						if(40 < hour_hour)
						{
							hour_salary = (hour_salary * 40) + ((hour_hour - 40) * (1.5 * hour_salary));
						}
						else
						{
							hour_salary = hour_salary * hour_hour;
						}
						printf("Salary %d working: %.2f\n", i, hour_salary);
						hour_sum += hour_salary;
					}
					printf("All employees receive salary(%.0f): %.2f\n\n", hour_cout, hour_sum);
					break;
				}
			case(3):
				{
					printf("\nEnter gross weekly sales: ");
					scanf("%f", &comis_sales);
					printf("Salary one working: %.2f\n", comis_sales * 250);
					printf("All employees receive salary(%.0f): %.2f\n\n", comis_cout, comis_sales * 250 * comis_cout);
					break;
				}
			case(4):
				{
					int i;
					piece_sum = 0;

					for(i = 1; i <= piece_cout; i++)
					{
						printf("\nHow did %d working parts: ", i);
						scanf("%f", &piece_parts);
						printf("Payment for one detail: ");
						scanf("%f", &piece_salary);
						printf("Salary %d working: %.2f\n", i, piece_salary * piece_parts);
						piece_sum += (piece_salary * piece_parts);
					}
					printf("All employees receive salary(%.0f): %.2f\n\n", piece_cout, piece_sum);
					break;
				}
			case(0): break;
			default: printf("ERR: Incorrent number!\n\n");
		}
	}

	return 0;
}