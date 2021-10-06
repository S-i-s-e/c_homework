#include <stdio.h>

int cnt = 0;

void hanoi(char *from, char *trans, char *to, int n)
{
	if (n == 0)
	{
		return;
	}

	hanoi(from, to, trans, n - 1);
	printf("%s-->%s\n", from, to);
	cnt++;
	hanoi(trans, from, to, n - 1);
}

int main()
{
	int n;
	scanf("%d", &n);
	hanoi("A", "B", "C", n);
	printf("%d\n", cnt);

	return 0;
}