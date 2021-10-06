#include <stdio.h>

int fun(int nth, int nums)
{
	if (nums % 5 == 1)
	{
		if (nth == 5)
		{
			return 1;
		}else
		{
			return fun(nth + 1, 4 * nums / 5);
		}
		
	}else
	{
		return 0;
	}
}

int main()
{
	for (int i = 0; ; ++i)
	{
		if (fun(1, i))
		{
			printf("%d\n", i);
			break;
		}
	}

	return 0;
}