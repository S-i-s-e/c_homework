#include <stdio.h>

int main()
{
	char c;
	scanf("%c", &c);

	if (c >= 'a' && c <= 'z')
	{
		c += 'A' - 'a';
	}

	printf("%c", c);

	return 0;
}