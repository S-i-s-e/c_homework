#include <stdio.h>


int main()
{
	for (int a = 1; a <= 5; ++a)
	{
		for (int b = 1; b <= 5; ++b)
		{
			for (int c = 1; c <= 5; ++c)
			{
				for (int d = 1; d <= 5; ++d)
				{
					for (int e = 1; e <= 5; ++e)
					{
						if ((a != b) && (a != c) && (a != d) && (a != e) && \
							(b != c) && (b != d) && (b != e) && (c != d) && \
							(c != e) && (d != e) && \
							((b == 2 && a != 3) || (b != 2 && a == 3)) && \
							((b == 2 && e != 4) || (b != 2 && e == 4)) && \
							((c == 1 && d != 2) || (c != 1 && d == 2)) && \
							((c == 5 && d != 3) || (c != 5 && d == 3)) && \
							((e == 4 && a != 1) || (e != 4 && a == 1)))
						{
							printf("A的名次是:%d\n", a);
							printf("B的名次是:%d\n", b);
							printf("C的名次是:%d\n", c);
							printf("D的名次是:%d\n", d);
							printf("E的名次是:%d\n", e);
						}
					}
				}
			}
		}
	}

	return 0;
}