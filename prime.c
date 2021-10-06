#include <stdio.h>
#include <stdlib.h>

int primes(int n)
{
	int *a = (int *)malloc(sizeof(int) * (n + 1));
	int i, j;
	for (i = 2; i <= n; ++i)
	{
		 a[i] = i;
	}

	for (i = 2; i <= n; ++i)
	{
		while (a[i] == 0)
		{
			++i;
		}

		for (j = i + i; j <= n; j += i)
		{
			a[j] = 0;
		}
	}

	for (i = 100; i <= n; ++i)
	{
		if (a[i] != 0)
		{
			printf("%d ", i);
		}
	}

	return 0;
}

int main()
{
	primes(200);

	return 0;
}
