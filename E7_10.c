#include <stdio.h>

void swap(int *a, int *b)
{
	if (a == b)
	{
		return;
	}
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

void sort(int *a, size_t size)
{
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = 0; j < size - 1 - i; ++j)
		{
			if (*(a + j) < *(a + j + 1))
			{
				swap(a + j, a + j + 1);
			}
		}
	}
}

void in_num(int *x)
{
	for (int i = 0; i < 10; ++i)
	{
		scanf("%d", x + i);
	}
}

void out_num(int *x)
{
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ", x[i]);
	}
}

int main()
{
	int a[10];
	in_num(a);
	sort(a, 10);
	out_num(a);

	return 0;
}