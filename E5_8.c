#include <stdio.h>

int main()
{
	int a[3][4] = {1, 2, 3, 4, 9, 8, 7, 6, -10, 10, -5, 2};

	int max = **a;
	int row = 0;
	int col = 0;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
				row = i;
				col = j;
			}
		}
	}

	printf("max=%d\nrow=%d\ncolum=%d\n", max, row, col);


	return 0;
}