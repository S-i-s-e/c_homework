#include <stdio.h>

int main()
{
	int grade;
	scanf("%d", &grade);

	switch (grade / 10)
	{
		case 10:
		case 9:
		{
			printf("%d belongs to A.\n", grade);
			break;
		}
		case 8:
		case 7:
		case 6:
		{
			printf("%d belongs to B.\n", grade);
			break;
		}

		default:
		{
			printf("%d belongs to C.\n", grade);
			break;
		}
	}

	return 0;
}