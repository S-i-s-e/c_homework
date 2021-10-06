#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);

	int i;
	for (i = a < b ? a : b; i > 0; --i)
	{
		if (a % i == 0 && b % i == 0)
		{
			printf("%d ", i);
			break;
		}
	}

	for (i = a > b ? a : b; ; ++i)
	{
		if (i % a == 0 && i % b == 0)
		{
			printf("%d\n", i);
			break;
		}
	}

	return 0;
}