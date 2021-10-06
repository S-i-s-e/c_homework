#include <stdio.h>
#include <string.h>

void skipChar(char *s, char target, int *index)
{
	while (s[*index] == target)
	{
		(*index)++; 
		// *index++相当于*(index++),单目运算符自有向左结合
	}
}

void typeSetting(char *s, char *ns)
{
	int index = 0;
	int nindex = 0;
	
	while (s[index])
	{
		skipChar(s, ' ', &index);
		ns[nindex++] = ' ';
		ns[nindex++] = ' ';
		while (s[index] && s[index] != '.' && s[index] != '?' && s[index] != '!')
		{
			ns[nindex++] = s[index++];
		}
		ns[nindex++] = s[index++];
		ns[nindex++] = '\n';
	}
	ns[nindex] = 0;
}

int main()
{
	char s[1024] = {0};
	char ns[1024] = {0};
	fgets(s, 1024, stdin);

	typeSetting(s, ns);

	printf("%s", ns);

	return 0;
}