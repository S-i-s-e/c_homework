#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sort(char *s, int length)
{
	for (int i = 0; i < length - 1; ++i)
	{
		
		for (int j = 1; j < length - i; ++j)
		{
			if (s[j - 1] > s[j])
			{
				s[j - 1] = s[j - 1] ^ s[j];
				s[j] = s[j - 1] ^ s[j];
				s[j - 1] = s[j - 1] ^ s[j];
			}
		}
	}

	return 0;
}

int main()
{
	char s[128];
	gets(s);

	sort(s, strlen(s));
	//qsort(s, strlen(s), sizeof(char), cmp);
	printf("%s", s);

	return 0;
}