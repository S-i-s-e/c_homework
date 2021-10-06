#include <stdio.h>

int fb(int n)
{
	if (n < 3)
    {
        return 1;
    }

    int a = 1;
    int b = 1;
    int c;

    for (int i = 3; i <= n; ++i)
    {
        c = a + b;
        b = c;
        a = b - a;
    }

    return c;
}


int main()
{
	int n;
	scanf("%d", &n);

    printf("%d\n", fb(n));

    return 0;
}