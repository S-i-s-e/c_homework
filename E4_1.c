#include <stdio.h>

int isNarcissistic(int n)
{
	int a, b, c;
	a = n / 100;
	b = n / 10  - a * 10;
	c = n - a * 100 - b * 10;


	if (n == a * a * a + b * b * b + c * c * c)
	{
		return 1;
	}
	return 0;
}

int main()
{
	for (int i = 100; i < 1000; ++i)
	{
		if (isNarcissistic(i))
		{
			printf("%d\n", i);
		}
	}

	return 0;
}