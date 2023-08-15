#include "main.h"

/**
 * print_alphabet_x10 - A function that prints the alphabet
 *
 * It prints it 10 times in the lowercase and returns nothing
 */

void print_alphabet_x10(void)
{
	int a;
	int b;

	for (b = 1; b <= 10; b++)
	{
		for (a = 97; a < 123; a++)
		{
		_putchar(a);
		if (a == 122)
			_putchar('\n');
		}
	}
}
