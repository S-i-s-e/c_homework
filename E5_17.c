#include <stdio.h>

int main()
{
	char s[128];
	gets(s);
	
	int a = 0;
	int b = 0;
	int c = 0;
	int i = 0;
	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			++a;
		}else if (s[i] == ' ')
		{
			++b;
		}else
		{
			++c;
		}
		++i;
	}

	printf("%d %d %d\n", a, b, c);

	return 0;
}