#include <stdio.h>
#include <stdlib.h>

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

void reverse(int *a, size_t size)
{
	for (int i = 0; i < (size + 1) / 2; ++i)
	{
		swap(&a[i], &a[size - 1 - i]);
	}
}

int main()
{
	size_t size = 0;
	size_t capacity = 8;
	int *a = (int *)malloc(sizeof(int) * capacity);
	int i = 0;
	while (scanf("%d", a + size) != EOF)
	{
		++size;
		if (size >= capacity)
		{
			capacity <<= 1;
			a = (int *)realloc(a, sizeof(int) * capacity);
		}
	}
	
	reverse(a, size);
	for (i = 0; i < size; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	
	return 0;
}