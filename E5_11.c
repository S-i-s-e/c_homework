#include <stdio.h>

int main()
{
	char s[] = "I am very good at learning C language.";

	int i = 0;
	while (s[i])
	{
		putc(s[i], stdout);
		++i;
	}

	return 0;
}