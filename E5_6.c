#include <stdio.h>

int main()
{
	int a[20];

	int i;
	for (i = 0; i < 20; ++i)
	{
		scanf("%d", a + i);
	}

	for (i = 0; i < 20; ++i)
	{
		for (int j = 0; j < 20 && i != j; ++j)
		{
			//if ()
			{
				if (a[i] % a[j] == 0)
				{
					printf("%d ", a[i]);
					break;
				}
			}
		}
	}

	return 0;
}