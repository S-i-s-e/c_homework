#include <stdio.h>

void swap(int *a, int *b)
{
	// !!!当自己异或自己的时候会变成0！！！
	if (a == b)
	{
		return;
	}

	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

void selectSort(int *a, size_t n)
{
	int min;
	int index;
	for (int i = 0; i < n - 1; ++i)
	{
		min = a[i];
		index = i;
		for (int j = i + 1; j < n; ++j)
		{
			if (min > a[j])
			{
				min = a[j];
				index = j;
			}
		}
		swap(&a[i], &a[index]);
	}
}

int main()
{
	int a[10];
	scanf("%d%d%d%d%d%d%d%d%d%d", a + 0, a + 1, a + 2, a + 3, a + 4, a + 5, a + 6, a + 7, a + 8, a + 9);

	selectSort(a, 10);
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}