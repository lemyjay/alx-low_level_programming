#include "main.h"

/**
 * print_square - Name of function and entry point to function
 *
 * @size: holds the dimension of the square
 * that is the number of '#' to print to form the square
 * prints a square with the character '#'
 * followed by a new line
 * Returns void
 */
void print_square(int size)
{
	if (size > 0)
	{
		int a, b;
		int size2 = size;

		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size2; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
