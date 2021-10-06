#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);

	if (a % 2 != 0)
	{
		printf("%d is odd number!\n", a);
	}
	if (b % 2 != 0)
	{
		printf("%d is odd number!\n", b);
	}
	if (c % 2 != 0)
	{
		printf("%d is odd number!\n", c);
	}

	return 0;
}