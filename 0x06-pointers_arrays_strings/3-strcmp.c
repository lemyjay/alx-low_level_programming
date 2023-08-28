#include "main.h"
#include <stdlib.h>

/**
 * _strcmp - A function that compares two strings
 * and works exactly like the strcmp in the standard library.
 * Returns an interger less than, equal to, or greater than zero if
 * the first string is found, respectively, to be less than, to match,
 * or be greater that the second string.
 *
 * @s1: the pointer that points to the first string to which the other is to
 * be compared with or to.
 * @s2: the pointer that points to the second string to which the first string
 * is to be compared to.
 * Return: an integer less than, equal to, or greater than zero
 * if s1 is found, respectively, to be less than, to match,
 * or be greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int integer = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			integer = s1[i] - s2[i];
			break;/* Exit loop early since comparison is not equal*/
		}
	}

	/* Hamdle the case where one string is shorter than the other */
	if (s1[i] != '\0' || s2[i] != '\0')
		integer = s1[i] - s2[i];

	return (integer);
}
