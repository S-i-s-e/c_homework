#include <stdio.h>

int main()
{
	double t;
	scanf("%lf", &t);

	if (t <= 10)
	{
		printf("%d", 30);
	}else if (t <= 50)
	{
		printf("%d", 30 + ((int)t + 1 - 10) * 3);
	}else
	{
		printf("%d", 150 + ((int)t + 1 - 50) * 2);
	}

	return 0;
}