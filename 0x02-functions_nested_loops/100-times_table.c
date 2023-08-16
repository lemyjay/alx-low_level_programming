#include "main.h"

/**
 * print_times_table - Entry point to function
 *
 * prints n times table, starting with 0 where n lies between 15 and 0
 * Returns no value
 */
void print_times_table(int n)
{
	int a;
	int b;
	int product;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				product = a * b;
				if (product < 10)
				{
					if (b >= 1)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(product + '0');
				}
				else if (product < 100)
				{
					int firstDigit = product / 10;
					int secondDigit = product % 10;
					if (b >= 1)
						_putchar(' ');
					_putchar(firstDigit + '0');
					_putchar(secondDigit + '0');
				}
				else
				{
					int firstDigit = product / 100;
					int secondDigit = (product - (firstDigit * 100)) / 10;
					int thirdDigit = product % 10;
					_putchar(firstDigit + '0');
					_putchar(secondDigit + '0');
					_putchar(thirdDigit + '0');
				}

				if(b < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
