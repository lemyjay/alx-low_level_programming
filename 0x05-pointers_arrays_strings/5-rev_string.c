#include "main.h"
#include <stdlib.h>

/**
 * rev_string - A function that reverses a string
 *
 * @s: a pointer that holds the address of the string
 * Return: returns an integer.
 */

void rev_string(char *s)
{
	int length = 0;
	int i;
	int a = 0;
	char temp;

	while (s[length] != '\0')
		length++;

	for (i = length - 1; (i >= 0) && (i != a); i--, a++)
	{
		temp = s[a];
		s[a] = s[i];
		s[i] = temp;
	}
	/*s[length] = '\0';*/
}
