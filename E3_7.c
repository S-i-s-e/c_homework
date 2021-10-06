#include <stdio.h>

int a[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int isLeapYear(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				return 1;
			}else
			{
				return 0;
			}
		}else
		{
			return 1;
		}
	}else
	{
		return 0;
	}
}

int main()
{
	int year, month, day;
	scanf("%d,%d,%d", &year, &month, &day);
	if (isLeapYear(year))
	{
		a[1] = 29;
	}
	if (month <= 0 || month > 12 || day <= 0 || day > a[month - 1])
	{
		printf("data error.\n");
		return 0;
	}
	
	printf("%d ", day);
	for (int i = 0; i < month - 1; ++i)
	{
		printf("%d ", a[i]);
		day += a[month];
	}

	printf("It is the %dth day.\n", day);
	return 0;
}
