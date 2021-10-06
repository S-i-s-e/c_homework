#include <stdio.h>

void swap(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

void exchange(int *a, int *b, int *c)
{
	if (*a < *b)
	{
		swap(a, b);
	}
	if (*b < *c)
	{
		swap(b, c);
	}
	if (*a < *b)
	{
		swap(a, b);
	}
}

int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	exchange(&a, &b, &c);
	printf("%d %d %d\n", a, b, c);

	return 0;
}