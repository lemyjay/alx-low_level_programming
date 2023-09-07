#include "main.h"
#include <stdlib.h>

/**
 * argstostr - A function that concatenates all the arguments of the program
 * and each argument should be followed by a \n in the new string.
 *
 * @ac: holds the value of the number of command-line arguments entered.
 * @av: a pointer that points to the pointer of a string of argument.
 * Return: NULL if ac is 0 or av is NULL or if it fails(new string is NULL) ||
 * a pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *new;
	int i, j, k, n, length;

	/* Calculating the total length of the conctenated string. */
	n = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		length = 0;
		while (av[i][length] != '\0')
			length++;
		n += length + 1;
	}

	/* Allocating memory for the concatenated string. */
	new = (char *)malloc(n * sizeof(char ));
	if (new == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			new[k] = av[i][j];
			k++;
		}
		if (i < ac)
		{
			/* Adding '\n' after each argument except for the last one*/
			new[k] = '\n';
			k++;
		}
	}
	new[k] = '\0';/* Null terminating the concatenated string. */
	return (new);
}
