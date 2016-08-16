#include <stdio.h>

int main()
{
	int acc_num = 0;
	float srt_balance;
	float total_exp;
	float loan;
	float new_balance;
	float max_loan;
	while(1)
	{
		printf("Enter your account number(-1, for exit): ");
		scanf("%d", &acc_num);
		if(-1 == acc_num)
		{
			break;
		}
		printf("Enter start balance: ");
		scanf("%f", &srt_balance);
		printf("Enter the total amount of expenses: ");
		scanf("%f", &total_exp);
		printf("Enter the amount of the loan: ");
		scanf("%f", &loan);
		printf("Enter the credit limit: ");
		scanf("%f", &max_loan);
		printf("Account number: %d\n", acc_num);
		printf("The maximum amount of loan: %.2f\n", max_loan);
		printf("Balance: %.2f\n", new_balance = srt_balance + total_exp - loan);
		if(loan < new_balance)
		{
			printf("The credit limit is exceeded!!!\n\n");
		}

	}

	return 0;
}