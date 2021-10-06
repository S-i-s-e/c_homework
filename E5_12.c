#include <stdio.h>

int isLetter(char c)
{
	return c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z';
}

int main()
{
	char s[256];
	gets(s);

	int n = 0;
	if (isLetter(s[0]))
	{
		n = 1;
	}
	int i = 1;
	while (s[i])
	{
		if (s[i - 1] == ' ' && isLetter(s[i]))
		{
			++n;
		}
		++i;
	}

	printf("%d\n", n);

	return 0;
}