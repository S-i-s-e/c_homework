#include <stdio.h>

int age(int n)
{
	if (n == 1)
	{
		return 10;
	}
	
	return age(n - 1) + 2;
}

int main()
{
	printf("%d\n", age(5));
	return 0;
}