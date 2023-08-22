#include "main.h"
#include <stdlib.h>

/**
 * print_rev - A function that prints a string in reverse,
 * followed by a new line.
 *
 * @s: a pointer that holds the address of the string
 * Return: returns an integer.
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
		length++;

	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
