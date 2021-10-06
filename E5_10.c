#include <stdio.h>
#include <string.h>

char *my_strcat(char *dest, const char *src)
{
	int i = 0;
	while (dest[i])
	{
		++i;
	}

	int j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		++i;
		++j;
	}
	dest[i] = 0;

	return dest;
}

int main()
{
	char s1[128];
	char s2[128];
	gets(s1);
	gets(s2);
	
	my_strcat(s1, s2);
	printf("%s", s1);

	return 0;
}