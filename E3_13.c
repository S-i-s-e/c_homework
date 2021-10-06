#include <stdio.h>
#include <math.h>

int main()
{
	double l, t;
	scanf("%lf\n%lf", &l ,&t);

	int f = 0;
	if (l <= 3)
	{
		f = 10;
	}else if (l <= 13)
	{
		f = ceil(l - 3) * 2 + 10;
	}else
	{
		f = ceil(l - 13) * 3 + 30;
	}

	if (t >= 5)
	{
		f += ceil(t / 5) * 2;
	}

	printf("%d", f);

	return 0;
}