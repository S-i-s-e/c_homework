#include <stdio.h>

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