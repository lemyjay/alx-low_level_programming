#include "main.h"
#include <stdlib.h>

/**
 * strtow - A function that splits a string into words. The function returns a
 * pointer to an array of strings(words), each element of the array containing
 * a single word, null-terminated and the last element of the returned array
 * should be NULL. Words are separated by spaces.
 *
 * @str: a pointer that points to the string to split.
 * Return: NULL if str is NULL or str is an empty string or if the function
 * fails || a pointer to an array of strings(words)
 */

char **strtow(char *str)
{
	char **new;
	int i, j, k, length;

	length = 0;
	if (str == NULL || *str == '\0')
		return (NULL);
	while (str[length] != '\0')
		length++;
	new = malloc(length * sizeof(char *));
	if (new == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		while (str[i] == ' ')
			i++;
		j = 0;
		while (str[i + j] != ' ' && str[i + j] != '\0')
			j++;
		new[i] = malloc((j + 1) * sizeof(char));
		if (new[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(new[k]);
			free(new);
			return (NULL);
		}
		for (k = 0; k < j; k++)
			new[i][k] = str[i + k];
		new[i][j] = '\0';
	}
	new[i] = NULL;
	return (new);
}
