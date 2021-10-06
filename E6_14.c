#include <stdio.h>

int max(int *a, size_t size)
{
	int max = a[0];
	int index = 0;
	for (int i = 1; i < size; ++i)
	{
		if (a[i] > max)
		{
			max = a[i];
			index = i;
		}
	}

	return index;
}

int main()
{
	int a[10];
	for (int i = 0; i < 10; ++i)
	{
		scanf("%d", a + i);
	}

	int index = max(a, 10);
	printf("%d %d\n", a[index], index + 1);

	return 0;
}