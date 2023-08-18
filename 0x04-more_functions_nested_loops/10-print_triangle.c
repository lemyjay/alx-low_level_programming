#include "main.h"

/**
 * print_triangle - Name of function and entry point to function
 *
 * @size: holds the dimension of the triangle
 * that is the number of '#' to print to form the triangle
 * prints a triangle with the character '#'
 * followed by a new line
 * Returns void
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int a, b;
		int size2 = size;

		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size2; b++)
			{
				if (b < (size - a - 1))
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
