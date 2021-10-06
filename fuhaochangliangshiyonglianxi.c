#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

int main()
{
	for (int i = 0; i < 10; ++i)
	{
		int a = rand();
		int b = rand();
		printf("%d %d ", a, b);

		a = a ^ b;
		b = a ^ b;
		a = a ^ b;
		printf("%d %d\n", a, b);
	}

	return 0;
}