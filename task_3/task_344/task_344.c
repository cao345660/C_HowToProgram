#include <stdio.h>

int main()
{
	float i, j, k;
	
	while(1)
	{
		printf("Enter first side of the triangle: ");
		scanf("%f", &i);
		if(0 < i) break;
		printf("Enter correct value!!!\n");
	}
	while(1)
	{
		printf("Enter second side of the triangle: ");
		scanf("%f", &j);
		if(0 < j) break;
		printf("Enter correct value!!!\n");
	}
	while(1)
	{
		printf("Enter third side of the triangle: ");
		scanf("%f", &k);
		if(0 < k) break;
		printf("Enter correct value!!!\n");
	}
	if((i < j + k) && (j < i + k) && (k < i + j)) printf("Maybe! ^_~\n");
	else printf("Impossible! =,(\n");

	return 0;
}