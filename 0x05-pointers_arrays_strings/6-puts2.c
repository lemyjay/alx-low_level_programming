#include "main.h"
#include <stdlib.h>

/**
 * puts2 - A function that prints every other character of a string,
 * starting with the first character,
 * followed by a new line.
 *
 * @str: a pointer that holds the address of the string
 * returns void
 */

void puts2(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
		length++;


	for (i = 0; i < length; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
