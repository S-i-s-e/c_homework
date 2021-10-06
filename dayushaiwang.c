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

int dayOfYear(int year, int month, int day)
{
	if (isLeapYear(year))
	{
		a[1] = 29;
	}
	if (month <= 0 || month > 12 || day <= 0 || day > a[month])
	{
		printf("data error.\n");
		return -1;
	}
	
	for (int i = 0; i < month - 1; ++i)
	{
		day += a[i];
	}

	return day;
}

int main()
{
	int year, month, day;
	scanf("%d%d%d", &year, &month, &day);

	int days = 0;
	for (int i = 1990; i < year; ++i)
	{
		days += isLeapYear(i) ? 366 : 365;
	}
	days += dayOfYear(year, month, day);

	days = days % 5;
	printf("%s", (days > 0 && days < 4) ? "fishing\n" : "sleeping\n");

	return 0;
}