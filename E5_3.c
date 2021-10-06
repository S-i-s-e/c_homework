#include <stdio.h>

int bubbleSort(int *a, int size)
{
	int temp;
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = 0; j < size - 1 - i; ++j)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	return 0;
}

int main()
{
	int a[10];
	int i;
	for (i = 0; i < 10; ++i)
	{
		scanf("%d", a + i);
	}
	
	bubbleSort(a, 10);

	for(i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}

	printf("\n");

	return 0;
}