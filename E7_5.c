#include <stdio.h>
#include <string.h>

int my_strCmp(const char * str1, const char *str2)
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

void swapStr(char *str1, char *str2)
{
	if (str1 == str2)
	{
		return;
	}
	int i = 0;
	while (str1[i] && str2[i])
	{
		str1[i] = str1[i] ^ str2[i];
		str2[i] = str1[i] ^ str2[i];
		str1[i] = str1[i] ^ str2[i];
		++i;
	}
	
	if (str1[i] == 0)
	{
		while (str2[i])
		{
			str1[i] = str2[i];
			str2[i] = 0;
			++i;
		}
        str1[i] = 0; // 要在最后位加0，否则可能会导致乱码
	}else
	{
		while (str1[i])
		{
			str2[i] = str1[i];
			str1[i] = 0;
			++i;
		}
        str2[i] = 0;
	}
}

int main()
{
    char str1[128];
    char str2[128];
    char str3[128];
    gets(str1);
    gets(str2);
    gets(str3);
    //printf("%s\n%s\n%s\n", str1, str2, str3);

    if (my_strCmp(str1, str2) > 0)
    {
        swapStr(str1, str2);
    }
    if (my_strCmp(str2, str3) > 0)
    {
        swapStr(str2, str3);
    }
	if (my_strCmp(str1, str2) > 0)
    {
        swapStr(str1, str2);
    }

    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str3);

    return 0;
}