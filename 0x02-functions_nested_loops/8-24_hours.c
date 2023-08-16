#include "main.h"

/**
 * jack_bauer - Entry point to function
 *
 * prints every minute of the day of Jack Bauer
 * Returns nothing
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			int first;
			int second;

			if (hour < 10)
			{
				_putchar('0');
				_putchar(hour + '0');
			}
			else
			{
				first = hour / 10;
				second = hour % 10;
				_putchar(first + '0');
				_putchar(second + '0');
			}
			_putchar(':');
			if (minute < 10)
			{
				_putchar('0');
				_putchar(minute + '0');
			}
			else
			{
				first = minute / 10;
				second = minute % 10;
				_putchar(first + '0');
				_putchar(second + '0');
			}
			_putchar('\n');
		}
	}
}
