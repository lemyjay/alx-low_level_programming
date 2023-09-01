#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string
 *
 * @s: a pointer that holds the address that points to the string
 * Return: length of the string as an integer value
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
