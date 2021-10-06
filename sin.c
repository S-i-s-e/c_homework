#include <stdio.h>
#include <math.h>

double fact(int n)
{
	double f = 1;
	for (int i = 2; i <= n; ++i)
	{
		f *= i;
	}
	printf("%lf\n", f);

	return f;
}

double mysin(double x, int *cnt)
{
	*cnt = 0;
	double sum = 0;
	int i = 1;
	int sign = 1;
	double t;
	while (1)
	{
		t = sign * pow(x, i) / fact(i);
		sum += t;
		sign = -sign;
		*cnt += 1;
		i += 2;

		if (fabs(t) < 1e-5)
		{
			break;
		}
	}

	return sum;
}

int main()
{
	double x;
	scanf("%lf", &x);

	int cnt;
	double res = mysin(x, &cnt);
	printf("%.3lf\n%d\n", res, cnt);

	return 0;
}