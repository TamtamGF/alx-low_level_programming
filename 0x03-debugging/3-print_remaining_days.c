#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into concideration
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: always 0
 */

void print_remaining_days(int month, int day, int year);

/**
 * print_remaining_days - return  remaining days
 * @month: current month
 * @day: current day
 * @year: current year
 * Return: always 0
 */

void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0) || (year % 100 == 0 && year % 400 == 0))
	{
		int leap_days = 366;

		if (day >= 60 && month > 2)
		{
			day++;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", leap_days - day);
	}
	else
	{
		if (day == 60 && month == 2)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			int standard_days = 365;

			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", standard_days - day);
		}
	}
}
