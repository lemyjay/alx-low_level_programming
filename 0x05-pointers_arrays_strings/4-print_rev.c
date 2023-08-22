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

	while (*s != '\0')
	{
		length++;
		s++;
	}


	/*
	 * After calculating the length of the string,
	 * you have moved the s pointer to the end of the string using s++.
	 * so now the pointer is pointing to the last character of the string s
	 * we then start printing from there towards the first character
	 * by decrementing
	 */
	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
