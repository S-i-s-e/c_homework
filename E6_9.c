#include <stdio.h>

unsigned long int fact(const int n)
{
	unsigned long int ret = 1;
	for (int i = 2; i <= n; ++i)
	{
		ret *= i;
	}

	return ret;
}

double mypow(double x, int n)
{
	double ret = 1;
	for (int i = 0; i < n; ++i)
	{
		ret *= x;
	}

	return ret;
}

double equation(double x, int n)
{
	double sum = 0;
	for (int i = 1; i <= n; ++i)
	{
		sum += mypow(-1, i - 1) * mypow(x, i) / fact(i);
	}

	return sum;
}

int main()
{
	double x;
	int n;
	scanf("%lf%d", &x, &n);

	printf("%.4lf\n", equation(x, n));

	return 0;
}