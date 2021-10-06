#include <stdio.h>

int main()
{
	int a[10];

	for (int i = 0;i < 10; ++i)
	{
		scanf("%d", a + i);
	}

	int max = a[0];
	int sum = a[0];
	for (int j = 1; j < 10; ++j)
	{
		sum += a[j];
		if (a[j] > max)
		{
			max = a[j];
		}
	}

	printf("%d %d\n", sum, max);

	return 0;
}