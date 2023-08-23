#include "main.h"
#include <stdlib.h>

/**
 * puts_half - A function that prints the second half of a string,
 * followed by a new line.
 * if the number of characters is odd, it should print the last n characters
 * where n = (length_of_the_string - 1) / 2
 *
 * @str: a pointer that holds the address of the string
 * returns void
 */

void puts_half(char *str)
{
	int length = _strlen(str);
	int i;

	if (length % 2 == 0)
	{
		for (i = (length / 2); i < length; i++)
			_putchar(str[i]);
	}
	else
		for (i = ((length / 2) + 2); i < length; i++)
			_putchar(str[i]);

	_putchar('\n');
}
