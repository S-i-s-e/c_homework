#include <stdio.h>

int main()
{
	int n = 10;
	double r = 0.1;
	double p = 1;

	for (int i = 0; i < n; i++)
	{
		p *= 1 + r;
	}

	printf("%lf\n", p);

	return 0;
}