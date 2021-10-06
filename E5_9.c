#include <stdio.h>
#include <string.h>

// 如果是元音，返回ASCII值，否则返回0
int isVowel(char c)
{
	switch (c)
	{
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	{
		return c;
		break;
	}
	
	default:
	{
		return 0;
		break;
	}
	}
}

int main()
{
	char s[100];
	scanf("%s", s);

	int i = 0;
	int res[128] = {0};
	int c;
	while (s[i] != NULL)
	{
		if (c = isVowel(s[i]))
		{
			++res[c];
		}
		++i;
	}

	for (i = 0; i < 128; ++i)
	{
		for (int j = 0; j < res[i]; ++j)
		{
			printf("%c", i);
		}
	}

	return 0;
}