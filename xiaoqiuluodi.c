#include <stdio.h>

int main()
{
	double m;
	int n;
	scanf("%lf%d", &m, &n);

	double h = m;
	double l = -m;
	for (int i = 0; i < n; ++i)
	{
		l +=  2 * h;
		h = h / 2;
	}

	printf("%.2lf %.2lf", h, l);

	return 0;
}