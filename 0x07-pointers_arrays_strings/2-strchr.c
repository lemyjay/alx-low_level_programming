#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strchr - A function that locates a character in a string.
 *
 * @s: a pointer that holds the address to the string to be searched
 * @c: a pointer that holds the address to the character to search
 * Return: a pointer to the first occurrence fo the character c in
 * the string s, or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}

	if (c == '\0')
		return (&s[i]);

	return (NULL);
}
