#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.This
 * function returns a pointer to a new string which is a duplicate of the
 * string str. Memory for the new string is obtained with malloc, and can
 * be freed with free.
 *
 * @str: a pointer that holds the reference string to be used.
 * Return: NULL if str is NULL or insufficient memory was available || a
 *  pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *new_str;
	unsigned int i, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;
	length++;

	new_str = (char *)malloc(length * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		new_str[i] = str[i];

	return (new_str);
}
