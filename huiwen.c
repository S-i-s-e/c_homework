#include <stdio.h>
#include <string.h>


int main()
{
	char s[128];
	scanf("%s", s);

	int length = strlen(s);
	for (int i = 0; i < length / 2; ++i)
	{
		if (s[i] != s[length - i - 1])
		{
			printf("N\n");
			return 0;
		}
	}

	printf("Y\n");
	return 0;
}