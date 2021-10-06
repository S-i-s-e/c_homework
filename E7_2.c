#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);

	int *p_a = &a;
	int *p_b = &b;

	if (*p_a < *p_b)
	{
		int *temp = p_a;
		p_a = p_b;
		p_b = temp;
	}

	printf("%d %d\n", *p_a, *p_b);

	return 0;
}