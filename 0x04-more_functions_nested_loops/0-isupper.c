#include "main.h"

/**
 * _isupper - Name of function and entry point to function
 * @c:  parameter for holding the value to be checked
 *
 * Return: 1 if c is uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
