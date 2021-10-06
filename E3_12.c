#include <stdio.h>

int main()
{
	char type;
	scanf("%c", &type);

	double a;
	scanf("%lf", &a);

	if (type == 'P')
	{
		if (a < 100)
		{
			printf(".2lf\n", a);
		}else
		{
			printf("%.2lf\n", a * 0.9);
		}
	}else if (type == 'H')
	{
		if (a < 1000)
		{
			printf("%.2lf", a * 0.8);
		}else
		{
			printf("%.2lf\n", a * 0.7);
		}
	}

	return 0;
}