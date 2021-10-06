#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);

	int c = a * a + b * b;
	if (c > 100)
	{
		printf("%d", c / 100);
	}else
	{
		printf("%d", a + b);
	}

	return 0;
}