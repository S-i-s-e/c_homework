#include <stdio.h>

int main()
{
	int a[5];
	int b[5];

	int i;
	for (i = 0; i < 5; ++i)
	{
		scanf("%d", a + i);
	}

	int j = 0;
	for (i = 0; i < 5; ++i)
	{
		if (a[i] % 11 == 0)
		{
			b[j++] = a[i];
		}
	}

	for (i = 0; i < j; ++i)
	{
		printf("%d ", b[i]);
	}

	return 0;
}