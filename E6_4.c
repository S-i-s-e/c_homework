#include <stdio.h>

#define MAX(a, b) (a > b ? a : b)
#define MIN(a, b) (a < b ? a : b)

int greatestCommonDivisor(int a, int b)
{
	int d = MIN(a, b);

	while (d > 0)
	{
		if (a % d == 0 && b % d == 0)
		{
			return d;
		}
		--d;
	}
}

int leastCommonMultiple(int a, int b)
{
	int m = MAX(a, b);
	
	while (1)
	{
		if (m % a == 0 && m % b == 0)
		{
			return m;
		}
		++m;
	}
}

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);

	printf("%d %d\n", greatestCommonDivisor(a, b), leastCommonMultiple(a, b));
	return 0;
}