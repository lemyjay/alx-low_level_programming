#include "main.h"

/**
 * print_most_numbers - Name of function and entry point to function
 *
 * prints the numbers from 0 to 9 except for 2 and 4
 * Returns void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
			_putchar(i);
	}
	_putchar('\n');
}
