#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);

	if (fabs(a) < 1e-6)
	{
		if (fabs(b) < 1e-6)
		{
			printf("Not an equation\n");
		}else
		{
			printf("%.2lf\n", - c / b);
		}
	}else
	{
		double delta = b * b - 4 * a * c;
		if (delta < 0)
		{
			double rx = - b / (2 * a);
			double ix = fabs(sqrt(-delta) / (2 * a));

			printf("%.2lf+%.2lfi %.2lf-%.2lfi", rx, ix, rx, ix);
		}else
		{
			double x1, x2;
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);

			printf("%.2lf %.2lf\n", x1 > x2 ? x1 : x2, x1 > x2 ? x2 : x1);
		}
	}

	return 0;
}