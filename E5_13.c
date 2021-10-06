#include <stdio.h>

#include <string.h>

int my_strcmp(const char * str1, const char *str2)
{
    int i = 0;
    while (str1[i] && str2[i])
    {
        if (str1[i] == str2[i])
        {
            ++i;
            continue;
        }else
        {
            return str1[i] > str2[i] ? 1 : -1;
        }
    }

    if (str1[i] == 0 && str2[i] == 0)
    {
        return 0;
    }else if (str1[i] == 0)
    {
        return -1;
    }else
    {
        return 1;
    }
}

int main()
{
    char str1[128];
    char str2[128];
    char str3[128];
	fgets(str1, 128, stdin);
	fgets(str2, 128, stdin);
  	fgets(str3, 128, stdin);

    char *res = str1;
    if (my_strcmp(str2, res) > 0)
    {
        res = str2;
    }
    if (my_strcmp(str3, res) > 0)
    {
        res = str3;
    }

    printf("%s", res);

    return 0;
