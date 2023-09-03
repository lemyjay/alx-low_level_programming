#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_number - A function that prints an integer.
 *
 * @n: holds the integer to be printed.
 * Returns void.
 */

void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar('0' + n % 10);
}
