#include<stdio.h>
int main()
{
	double b;
	scanf_s("%lf", &b);
	int a = b;
	if (b - a != 0)
	{
		printf("Error");
	}
	else
	{
		if (a % 2 == 0)
			printf("even");
		else
			printf("odd");
	}
	return 0;
}