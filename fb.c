#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n < 2)
    {
        printf("1");
        return 0;
    }

    int a = 1;
    int b = 1;
    int c;
    int fb[20];
    fb[0] = 1;
    fb[1] = 1;

    for (int i = 2; i < 20; ++i)
    {
        fb[i] = fb[i - 1] + fb[i - 2];
    }

    for (int i = 0; i < 20; ++i)
    {
        printf("%12d", fb[i]);
        if ((i + 1) % 5 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}