#include "main.h"

/**
 * times_table - Entry point to function
 *
 * prints the 9 times table, starting with 0
 * Returns no value
 */
void times_table(void)
{
	int a;
	int b;
	int product;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			product = a * b;
			if (product < 10)
			{
				if (b >= 1)
					_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				int firstDigit;
				int secondDigit;

				firstDigit = product / 10;
				secondDigit = product % 10;
				_putchar(firstDigit + '0');
				_putchar(secondDigit + '0');
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
