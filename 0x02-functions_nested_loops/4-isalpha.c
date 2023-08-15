#include "main.h"

/**
 * _isalpha - Name of function and entry point to function
 * @c:  parameter for holding the value to be checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
