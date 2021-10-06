#include <stdio.h>

int main()
{
	double w, h;
	scanf("%lf %lf", &w, &h);

	double t = w / (h * h);
	if (t < 18)
	{
		printf("lower weight\n");
	}else if (t < 25)
	{
		printf("normal weight\n");
	}else if (t < 27)
	{
		printf("higher weight\n");
	}else
	{
		printf("obesity\n");
	}

	return 0;
}