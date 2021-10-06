#include <stdio.h>
#include <stdlib.h>


char *strIn(char *dest, const char *src, int n)
{
	int length = 0;
	while (dest[length])
	{
		++length;
	}

	char *temp = (char *)malloc(length + 1);
	int i = 0;
	int j = 0;
	while (src[j])
	{
		temp[i] = dest[n];
		dest[n] = src[j];
		++n;
		++i;
		++j;
	}
	
	i = 0;
	while (temp[i])
	{
		dest[n] = temp[i];
		++n;
		++i;
	}
	dest[n] = 0;
	free(temp);

	return dest;
}

int main()
{
	char s1[128];
	char s2[128];
	int n;
	scanf("%d\n", &n);
	gets(s1);
	gets(s2);
	
	
	strIn(s1, s2, n - 1);
	printf("%s", s1);

	return 0;
}