#include "main.h"

/**
 * print_alphabet - A function that prints the alphabet
 *
 * It prints it in the lowercase and returns nothing
 */

void print_alphabet(void)
{
	int a;

	for (a = 97; a < 123; a++)
	{
		_putchar(a);
		if (a == 122)
			_putchar('\n');
	}
}
