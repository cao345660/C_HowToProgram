#include <stdio.h>

int main()
{
	int i, j, k;

	while(1)
	{
		printf("Enter first cathetus: ");
		scanf("%d", &i);
		if(0 < i) break;
		printf("Enter correct value!!!\n");
	}
	while(1)
	{
		printf("Enter second cathetus: ");
		scanf("%d", &j);
		if(0 < j) break;
		printf("Enter correct value!!!\n");
	}
	while(1)
	{
		printf("Enter hypotenuse: ");
		scanf("%d", &k);
		if(0 < k) break;
		printf("Enter correct value!!!\n");
	}
	if( (k * k) == ((i * i) + (j * j))) printf("Maybe! ^_~\n");
	else printf("Impossible! =,(\n");


	return 0;
}