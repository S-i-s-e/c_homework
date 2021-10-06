#include <stdio.h>

int g_n;
char g_s[128] = {0};

/*
* 没太明白这道题是什么意思
*/

void fun()
{
	int b = 0;
	int temp = g_n;
	while (g_n)
	{
		g_n /= 10;
		++b;
	}
	
	for (int i = 2 * b - 1; i >= 0; --i)
	{
		g_s[i--] = '*';
		g_s[i] = temp % 10 + '0';
		temp /= 10;
	}
}

int main()
{
	scanf("%d", &g_n);
	fun();
	printf("%s\n", g_s);

	return 0;
}