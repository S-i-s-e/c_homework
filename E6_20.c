#include <stdio.h>

int fun(int a, int b)
{
	int n = a % 10;
	n = n * 10 + b % 10;

	return a % n == 0 || b % n == 0 ? 1 : 0;
}

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);

	printf("%s\n", fun(a, b) ? "Lucky!" : "No!");
	return 0;
}