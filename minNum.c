#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a[10];

	for (int i = 0; i < 10; ++i)
	{
		scanf("%d", &a[i]);
	}

	int res = 0;
	for (int j = 1; j < 10; ++j)
	{
		if (abs(a[j]) < abs(a[res]))
		{
			res = j;
		}
	}

	printf("%d", a[res]);

	return 0;
}