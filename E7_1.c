#include <stdio.h>

int main()
{
	int a;
	int b;

	int *p1 = &a;
	int *p2 = &b;

	scanf("a=%d,b=%d", p1, p2);
	printf("*p1=%d,*p2=%d", *p1, *p2);

	return 0;
}