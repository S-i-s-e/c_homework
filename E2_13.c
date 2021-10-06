#include <stdio.h>

int main()
{
	double a;
	double b;
	scanf("%lf%lf", &a, &b);

	printf("%.3lf+%.3lf=%.3lf\n", a, b, a + b);
	printf("%.3lf-%.3lf=%.3lf\n", a, b, a - b);
	printf("%.3lf*%.3lf=%.3lf\n", a, b, a * b);
	printf("%.3lf/%.3lf=%.3lf\n", a, b, a / b);

	return 0;
}