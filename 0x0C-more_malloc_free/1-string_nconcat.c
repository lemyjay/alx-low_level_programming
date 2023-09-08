#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_length - A function that returns the length of a string as an integer.
 *
 * @s: a pointer that holds the address to the string.
 * Return: the length of the string as an integer
 */

unsigned int str_length(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}

/**
 * string_nconcat - A function that concatenates two strings. The returned
 * pointer points to a newly allocated space in memory which contains the
 * contents of s1, followed by the first contents of s2, and null terminated.
 * If NULL is passed, it is treated as an empty string. If n is greater than
 * or equal to the length of s2, then the entire string s2 is used.
 *
 * @s1: a pointer that holds the address of the first string on which the
 * operation is to performed.
 * @s2: a pointer that holds the address of the second string.
 * @n: the number of first bytes of s2 to concatenate.
 * Return: NULL on failure (insufficient memory was available) || a
 *  pointer to the newly allocated space in memory which contains the
 *  concatenation.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i, j, length1 = 0, length2 = 0, new_length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	length2 = str_length(s2);
	length1 = str_length(s1);

	if (length2 > n)
		new_length = length1 + n + 1;
	else
		new_length = length1 + length2 + 1;

	new_str = malloc(new_length * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		new_str[i] = s1[i];

	for (j = 0; j < n && s2[j] != '\0'; j++, i++)
		new_str[i] = s2[j];

	new_str[i] = '\0';

	return (new_str);
}
