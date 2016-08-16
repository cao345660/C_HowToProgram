//Опишите в общих словах, каким образом вы могли бы убрать операторы break из оператора
//switch и заменить их структурными эквивалентами. Примените разработанный здесь метод(
//возможно неуклюжий) для устранения операторов break из программы.

//#include <stdio.h>
//
//int main()
//{
//	int grade;
//	unsigned int aCount = 0;
//	unsigned int bCount = 0;
//	unsigned int cCount = 0;
//	unsigned int dCount = 0;
//	unsigned int fCount = 0;
//
//	puts("Enter the letter grades.");
//	puts("Enter the EOF character to end input.");
//
//	while((grade = getchar()) != EOF)
//	{
//
//		switch(grade)
//		{
//			case 'A':
//			case 'a':
//				++aCount;
//				break;
//
//			case 'B':
//			case 'b':
//				++bCount;
//				break;
//
//			case 'C':
//			case 'c':
//				++cCount;
//				break;
//
//			case 'D':
//			case 'd':
//				++dCount;
//				break;
//
//			case 'F':
//			case 'f':
//				++fCount;
//				break;
//
//			case '\n':
//			case '\t':
//			case ' ':
//				break;
//
//			default:
//				printf("%s", "Incorrect letter grade entered.");
//				puts("Enter a new grade.");
//				break;
//		}
//	}
//
//	puts("\nTotals for each letter grade are:");
//	printf("A: %d\n", aCount);
//	printf("B: %d\n", bCount);
//	printf("c: %d\n", cCount);
//	printf("D: %d\n", dCount);
//	printf("F: %d\n", fCount);
//
//	return 0;
//}

#include <stdio.h>

int main()
{
	int grade;
	unsigned int aCount = 0;
	unsigned int bCount = 0;
	unsigned int cCount = 0;
	unsigned int dCount = 0;
	unsigned int fCount = 0;

	puts("Enter the letter grades.");
	puts("Enter the EOF character to end input.");

	begin:
	while((grade = getchar()) != EOF)
	{
		switch(grade)
		{
			case 'A':
			case 'a':
				++aCount;
				goto begin;

			case 'B':
			case 'b':
				++bCount;
				goto begin;

			case 'C':
			case 'c':
				++cCount;
				goto begin;

			case 'D':
			case 'd':
				++dCount;
				goto begin;

			case 'F':
			case 'f':
				++fCount;
				goto begin;

			case '\n':
			case '\t':
			case ' ':
				goto begin;

			default:
				printf("%s", "Incorrect letter grade entered.");
				puts("Enter a new grade.");
				goto begin;
		}
	}

	puts("\nTotals for each letter grade are:");
	printf("A: %d\n", aCount);
	printf("B: %d\n", bCount);
	printf("C: %d\n", cCount);
	printf("D: %d\n", dCount);
	printf("F: %d\n", fCount);

	return 0;
}