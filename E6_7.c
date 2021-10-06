#include <stdio.h>

long int factorial_r(long int n)
{
	if (n <= 1)
	{
		return 1;
	}

	return n * factorial_r(n - 1);
}

int main()
{
	int n;
	scanf("%d", &n);

	printf("%ld\n", factorial_r(n));

	return 0;
}