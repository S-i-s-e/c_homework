#include <stdio.h>

int main()
{
	int k;
	scanf("%d", &k);

	int inc = -1;
	for (int i = k; i <= k; i += inc)
	{
		for (int j = 0; j < i; ++j)
		{
			printf("*");
		}
		printf("\n");

		if (i == 1)
		{
			inc = 1;
		}
	}

	return 0;
}