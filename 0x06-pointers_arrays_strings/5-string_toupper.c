#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_toupper- A function that changes all lowercase letters
 * of a string to uppercase.
 *
 * @s: pointer that points to the string you want to perform the operation on
 * Return: the point to the string with it in uppercase
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
	}

	return (s);
}


