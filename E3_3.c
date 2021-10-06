#include <stdio.h>

int main()
{
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);

	double max;
	printf("%.2lf", (max = (a > b) ? a : b) > c ? max : c);

	return 0;
}