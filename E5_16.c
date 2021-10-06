#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *a[10];
	int i;
	for (i = 0; i < 10; ++i)
	{
		a[i] = (int *)malloc(sizeof(int) * (i + 1));
	}

	int j;
	for (i = 0; i < 10; ++i)
	{
		a[i][0] = 1;
		a[i][i] = 1;
		for (j = 1; j < i; ++j)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}

	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j <= i; ++j)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < 10; ++i)
	{
		free(a[i]);
	}

	return 0;
}