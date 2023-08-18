#include "main.h"

/**
 * print_diagonal - Name of function and entry point to function
 *
 * @n: hold the value for the number of times you want to print '_'
 * to form the line
 * Draws a line using the underscore character
 * Returns void
 */
void print_diagonal(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			if (a >= 1)
			{
				int b;

				for (b = 1; b <= a; b++)
					_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');

}
