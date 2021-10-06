#include <stdio.h>

int main()
{
	int head = 35;
	int leg = 94;

	for (int i = 0; i <= head; ++i)
	{
		if (2 * i + 4 * (head - i) == leg)
		{
			printf("%d %d\n", i,  head - i);
		}
	}

	return 0;
}