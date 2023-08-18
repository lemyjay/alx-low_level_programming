#include "main.h"

/**
 * print_number - Prints an integer.
 *
 * @n: The integer to be printed.
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/*
	 * checks if n is greater than or equal to 10
	 * if it's true, it means there are more digits left to print
	 * the print_number(n / 10); line recursively calls the print_number function
	 * with n divided by 10
	 * This effectively prints the digits from left to righti
	 */
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
