#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - A function that converts a binary number to an unsigned int
 *
 * @b: a pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if:
 *	- there is one or more chars in the string b that is not 0 or 1
 *	- b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0, i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (!(b[i] == '1' || b[i] == '0'))
			return (0);

		converted = (converted * 2) + (b[i] - '0');
	}

	return (converted);
}
