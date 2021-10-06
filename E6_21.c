#include <stdio.h>

typedef struct date
{
	int year;
	int month;
	int day;
}Date;

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

/*returns 0 when the date is correct 
and -1 when the date is wrong*/
int checkDate(const Date * const date)
{
	if (isLeapYear(date->year))
	{
		a[1] = 29;
	}
	if (date->month <= 0 || date->month > 12 || date->day <= 0 || date->day > a[date->month - 1])
	{
		return -1;
	}

	return 0;
}


int main()
{
	Date date;
	scanf("%d%d%d", &(date.year), &(date.month), &(date.day));

	if (checkDate(&date) == -1)
	{
		perror("date error");
		return -1;
	}

	int carry = 0;
	date.day += 1;
	if (date.day > a[date.month - 1])
	{
		date.day = 1;
		carry = 1;
	}
	date.month += carry;
	carry = 0;
	if (date.month > 12)
	{
		date.month = 1;
		carry = 1;
	}
	date.year += carry;

	printf("%d %d %d\n", date.year, date.month, date.day);

	return 0;
}