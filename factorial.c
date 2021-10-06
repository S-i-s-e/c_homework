#include <stdio.h>

int mul(int n, int *a, int aSize)
{
	unsigned int carry = 0;
	unsigned long int temp;
	for (int i = 0; i < aSize && (a[i] != 0 || carry != 0); ++i)
	{
		temp = n * a[i] + carry;
		a[i]= temp % 1000000;
		printf("%d ", a[i]);
		carry = temp / 1000000;
	}
	printf("\n");
	return 0;
}

int aSum(int *a, int *b, int *sum, int size)
{
	for (int i = 0; i < size; ++i)
	{
		sum[i] = a[i] + b[i];
	}

	return 0;
}

int main()
{
	unsigned int a[10] = {1};
	unsigned int sum[10] = {1};
	for (int i = 2; i <= 50; ++i)
	{
		mul(i, a, 10);
		aSum(a, sum, sum, 10);
	}

	for (int i = 9; i > -1; --i)
	{
		if (a[i] != 0)
		{
			printf("%d ", a[i]);
		}
	}
	printf("\n");
	for (int i = 9; i > -1; --i)
	{
		if (sum[i] != 0)
		{
			printf("%d ", sum[i]);
		}
	}
	printf("\n");

	return 0;
}