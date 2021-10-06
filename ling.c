#include <stdio.h>

int main()
{
	int n = 4;
	
	int inc = 1;
	int i, j;
	for (i = 1; i > 0; i += inc)
	{
		for (j = 0; j < n - i; ++j)
		{
			printf(" ");
		}
		for (j = 0; j < i * 2 - 1; ++j)
		{
			printf("*");
		}
		printf("\n");

		if (i == n)
		{
			inc = -1;
		}
	}

	return 0;
}