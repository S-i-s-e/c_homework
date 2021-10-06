#include <stdio.h>


int delChar(char *str, char target)
{
	int i = 0, j = 0;
	while (str[i])
	{
		if (str[i] != target)
		{
			str[j] = str[i];
			++j;
		}
		++i;
	}
	str[j] = 0;
}

int main()
{
	char s[128];
	gets(s);
	delChar(s, ' ');

	printf("%s\n", s);
	return 0;
}