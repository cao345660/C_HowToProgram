//ѕерепешите программу, заменив оператор switch вложеной структурой if...else; будьте
//внимательны и надлежащим образом рассмотрите блок default. «атем перепишите эту новую
//версию, замен€€ вложенные операторы if...else серией операторов if; здесь также будьте
//внимательны и рассмотрите реализацию блока default(это сделать труднее, чем в варианте
//с вложенными if...else).

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

	while((grade = getchar()) != EOF)
	{
		if( grade == 'A' || grade == 'a' )
		{
			++aCount;
			continue;
		}
		if( grade == 'B' || grade == 'b' )
		{
			++bCount;
			continue;
		}
		if( grade == 'C' || grade == 'c' )
		{
			++cCount;
			continue;
		}
		if( grade == 'D' || grade == 'd' )
		{
			++dCount;
			continue;
		}
		if( grade == 'F' || grade == 'f' )
		{
			++fCount;
			continue;
		}
		if( grade == '\n' || grade == '\t' || grade == ' ' )
		{
			continue;
		}

		printf("%s", "Incorrect letter grade entered.");
		puts("Enter a new grade.");
	}

	puts("\nTotals for each letter grade are:");
	printf("A: %d\n", aCount);
	printf("B: %d\n", bCount);
	printf("c: %d\n", cCount);
	printf("D: %d\n", dCount);
	printf("F: %d\n", fCount);

	return 0;
}