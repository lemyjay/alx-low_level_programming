#include "main.h"

/**
 * print_number - Prints an integer.
 *
 * @n: The integer to be printed.
 */

void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}

	/*
	 * checks if number is greater than or equal to 10
	 * if it's true, it means there are more digits left to print
	 * the print_number(number / 10);
	 * line recursively calls the print_number function
	 * with number divided by 10
	 * This effectively prints the digits from left to righti
	 */
	if (number / 10)
		print_number(number / 10);
	_putchar((number % 10) + '0');
}
