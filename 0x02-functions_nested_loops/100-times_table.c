#include "main.h"

/**
 * print_times_table - Entry point to function
 *
 * @n: holds the value you want to create the times table for
 * checks if n falls within the accepted range
 * that is n should lie between 0 and 15,
 * then it calls the checkPrint function to print
 * Returns no value
 */
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
		checkPrint(n);
}

/**
 * checkPrint - Entry point to function
 *
 * @d: holds or receives the value you want to create the times table for
 * prints n times table, starting with 0
 * Returns no value
 */
void checkPrint(int d)
{
	int a, b, product;

	for (a = 0; a <= d; a++)
	{
		for (b = 0; b <= d; b++)
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
				if (b >= 1)
					_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar((product / 100) + '0');
				_putchar(((product / 10) % 10) + '0');
				_putchar((product % 10) + '0');
			}
			if (b < d)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
