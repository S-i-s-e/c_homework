#include <stdio.h>

int fun(int nth, int alcohol, int a, int b, char *s)
{
	if (nth == 15)
	{
		s[14] = 'b';
		if (alcohol == 1)
		{
			//printf("%s\n", s);
			return 1;
		}else
		{
			return 0;
		}
	}

	if (alcohol == 0)
	{
		return 0;
	}

	int sum = 0;
	if (a > 0)
	{
		s[nth - 1] = 'a';
		sum += fun(nth + 1, 2 * alcohol, a - 1, b, s);
	}
	if (b > 0)
	{
		s[nth - 1] = 'b';
		sum += fun(nth + 1, alcohol - 1, a, b - 1, s);
	}

	return sum;
}

int main()
{
	char s[16] = {0};
	printf("%d", fun(1, 2, 5, 9, s));

	return 0;
}