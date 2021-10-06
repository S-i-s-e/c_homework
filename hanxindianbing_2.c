#include <stdio.h>

int main()
{
	for (int i = 95; i < 200; i += 9)
	{
		if (i % 4 == 2 && i % 7 == 3)
		{
			printf("%d\n", i);
		}
	}

	return 0;
}