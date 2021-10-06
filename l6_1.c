#include <stdio.h>

int main()
{
	long int x;
	int y;
	scanf("%ld%d", &x, &y);

	long int res = 1;
	for (int i = 0; i < y; ++i)
	{
		res *= x;
	}

	printf("%ld", res);

	return 0;
}