#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * leet - A function that encodes a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 *
 * @s: pointer that points to the string you want to perform the operation on
 * Return: the point to the string with it encoded
 */

char *leet(char *s)
{
	int i = 0;
	char *leet_chars = "AEOTL";
	char *leet_replacements = "43071";

	while (s[i] != '\0')
	{
		int j = 0;

		while (leet_chars[j] != '\0')
		{
			if (s[i] == leet_chars[j] || s[i] == leet_chars[j] + 32)
			{
				s[i] = leet_replacements[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (s);
}


