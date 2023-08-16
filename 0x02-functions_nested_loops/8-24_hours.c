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
			int firstDigit;
			int secondDigit;

			if (hour < 10)
			{
				_putchar('0');
				_putchar(hour + '0');
			}
			else
			{
				firstDigit = hour / 10;
				secondDigit = hour % 10;
				_putchar(firstDigit + '0');
				_putchar(secondDigit + '0');
			}
			_putchar(':');
			if (minute < 10)
			{
				_putchar('0');
				_putchar(minute + '0');
			}
			else
			{
				firstDigit = minute / 10;
				secondDigit = minute % 10;
				_putchar(firstDigit + '0');
				_putchar(secondDigit + '0');
			}
			_putchar('\n');
		}
	}
}
