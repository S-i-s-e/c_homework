#include <stdio.h>

double avg(const int *base, size_t size)
{
	double sum = 0;
	for (int i = 0; i < size; ++i)
	{
		sum += base[i];
	}

	return sum / size;
}

int max(const int *base, size_t size)
{
	int max = base[0];
	for (int i = 1; i < size; ++i)
	{
		if (max < base[i])
		{
			max = base[i];
		}
	}

	return max;
}

int main()
{
	int a[10];
	int i;
	for (i = 0; i < 10; ++i)
	{
		scanf("%d", a + i);
	}

	double average = avg(a, 10);
	int cnt = 0;
	for (i = 0; i < 10; ++i)
	{
		if (a[i] > average)
		{
			++cnt;
		}
	}

	printf("%d\n%d\n", cnt, max(a, 10));

	return 0;
}