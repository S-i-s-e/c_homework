#include <stdio.h>

int main()
{
	for (int i = 4; i < 1000; i += 11)
	{
		if (i % 5 == 3 && i % 7 == 6)
		{
			printf("%d\n", i);
		}
	}

	return 0;
}
