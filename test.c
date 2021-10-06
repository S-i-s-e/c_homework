#include <stdio.h>
#include <stdlib.h>


int main()
{	
	char c = 'B';
	char cc = 'a' - 'A' + 'a' - 'A' - 'a' + 'A' + c;

	char d = 'C';
	char dd = 32 + d;

	int a = 'abcd';
	char *p = &a;
	printf("%c %c %c %c\n", p[0], p[1], p[2], p[3]);

	
	
	return 0;
}

