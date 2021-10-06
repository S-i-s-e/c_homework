#include <stdio.h>

double sum(double a, double b)
{
	return a + b;
}

int main()
{
	double a, b;
	scanf("%lf%lf", &a, &b);
	printf("%.2lf", sum(a, b));
	return 0;
}