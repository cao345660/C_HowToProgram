#include <stdio.h>

int main()
{
	int a, b;

	printf("Pls enter 'a': ");
	scanf("%d", &a);
	printf("Pls enter 'b': ");
	scanf("%d", &b);

	printf("Result(a+b): %d\n", a+b);
	printf("Result(a-b): %d\n", a-b);
	printf("Result(a*b): %d\n", a*b);
	printf("Result(a/b): %d\n", a/b);
	printf("Result(a mod b): %d\n", a%b);

	return 0;
}