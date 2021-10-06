#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a[10];


	for (int i = 0; i < 10; ++i)
	{
		scanf("%d", &a[i]);
	}

	double sum = 0;
	double avg;
	for (int j = 0; j < 10; ++j)
	{
		sum += a[j];
	}
	avg = sum / 10;

	int cnt = 0;
	for (int k = 0; k < 10; ++k)
	{
		if (a[k] > avg)
		{
			++cnt;
		}
	}
	printf("%d\n", cnt);

	return 0;
}