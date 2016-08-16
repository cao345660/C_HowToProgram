//Перепишите программу так, что бы она вычисляла среднюю оценку для группы.
//
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
//		switch(grade)
//		{
//			case 'A':
//			case 'a':
//				++aCount;
//				break;
//			case 'B':
//			case 'b':
//				++bCount;
//				break;
//			case 'C':
//			case 'c':
//				++cCount;
//				break;
//			case 'D':
//			case 'd':
//				++dCount;
//				break;
//			case 'F':
//			case 'f':
//				++fCount;
//				break;
//			case '\n':
//			case '\t':
//			case ' ':
//				break;
//			default:
//				printf("%s", "Incorrect letter grade entered.");
//				puts("Enter a new grade.");
//		}
//	}
//	
//	puts("Totals for each letter grade are:");
//	printf("A: %d\n", aCount);
//	printf("B: %d\n", aCount);
//	printf("C: %d\n", aCount);
//	printf("D: %d\n", aCount);
//	printf("F: %d\n", aCount);
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
	unsigned int counter = 0;
	unsigned int sum = 0;
	unsigned int result = 0;

	puts("Enter the letter grades.");
	puts("Enter the EOF character to end input.");

	while((grade = getchar()) != EOF)
	{
		switch(grade)
		{
			case 'A':
			case 'a':
				++aCount;
				++counter;
				sum += 5;
				break;
			case 'B':
			case 'b':
				++bCount;
				++counter;
				sum += 4;
				break;
			case 'C':
			case 'c':
				++cCount;
				++counter;
				sum += 3;
				break;
			case 'D':
			case 'd':
				++dCount;
				++counter;
				sum += 2;
				break;
			case 'F':
			case 'f':
				++fCount;
				++counter;
				sum += 1;
				break;
			case '\n':
			case '\t':
			case ' ':
				break;
			default:
				printf("%s", "Incorrect letter grade entered.");
				puts("Enter a new grade.");
		}
	}

	result = sum / counter;

	switch(result)
	{
		case(1): printf("Average rating: F\n"); break;
		case(2): printf("Average rating: D\n"); break;
		case(3): printf("Average rating: C\n"); break;
		case(4): printf("Average rating: B\n"); break;
		case(5): printf("Average rating: A\n"); break;
	}
	
	/*
	puts("Totals for each letter grade are:");
	printf("A: %d\n", aCount);
	printf("B: %d\n", aCount);
	printf("C: %d\n", aCount);
	printf("D: %d\n", aCount);
	printf("F: %d\n", aCount);
	*/

	return 0;
}