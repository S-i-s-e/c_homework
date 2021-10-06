#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	int inc = -1;
	int a = 1;
	int i, j;
	for (i = n; i <= n; i += inc)
	{
		for (j = 0; j < n - i; ++j)
		{
			printf(" ");
		}
		for (j = 0; j < i * 2 + 1; ++j)
		{
			printf("%d", a);
			a = a == 9 ? 1 : a + 1;
		}
		printf("\n");

		if (i == 0)
		{
			inc = 1;
		}
	}

	return 0;
}