#include <stdio.h>

void in_num(int *x)
{
	for (int i = 0; i < 10; ++i)
	{
		scanf("%d", x + i);
	}
}

void out_num(int *x)
{
	for (int i = 0; i < 9; ++i)
	{
		printf("%d ", x[i]);
	}
	printf("%d\n", x[9]);
}

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

void exchange(int *x)
{
	int minIndex = 0;
	int maxIndex = 0;
	for (int i = 1; i < 10; ++i)
	{
		if (x[minIndex] > x[i])
		{
			minIndex = i;
		}
	}
	swap(x, x + minIndex);
	for (int j = 1; j < 10; ++j)
	{
		if (x[maxIndex] < x[j])
		{
			maxIndex = j;
		}
	}
	swap(x + 9, x + maxIndex);
}

int main()
{
	int x[10];
	in_num(x);
	exchange(x);
	out_num(x);

	return 0;
}