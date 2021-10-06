#include <stdio.h>

int main()
{
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	double p = (a + b + c) / 2;

	double s = p * (p - a) * (p - b) * (p - c);

	printf("%.2lf", s);

	return 0;
}