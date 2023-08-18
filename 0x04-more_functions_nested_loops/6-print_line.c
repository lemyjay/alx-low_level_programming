#include "main.h"

/**
 * print_line - Name of function and entry point to function
 *
 * @n: hold the value for the number of times you want to print '_'
 * to form the line
 * Draws a line using the underscore character
 * Returns void
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n != 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');

}
