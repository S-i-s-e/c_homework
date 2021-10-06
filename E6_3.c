#include <stdio.h>

int max(int *a, size_t size)
{
	if (size == 1)
	{
		return *a;
	}else if (size == 2)
	{
		return *a > *(a + 1) ? *a : *(a + 1);
	}

	int m = max(a, size / 2);
	int n = max(a + size / 2, size - size / 2);
	return m > n ? m : n;
}

int main()
{
	int a[8];
	for (int i = 0; i < 8; ++i)
	{
		scanf("%d", a + i);
	}

	printf("%d\n", max(a, 8));
	return 0;
}