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

	while (s[i] != '\0')
	{
		if (s[i] == 'a' || s[i] == 'A')
			s[i] = '4';
		else if (s[i] == 'e' || s[i] == 'E')
			s[i] = '3';
		else if (s[i] == 'o' || s[i] == 'O')
			s[i] = '0';
		else if (s[i] == 't' || s[i] == 'T')
			s[i] = '7';
		else if (s[i] == 'l' || s[i] == 'L')
			s[i] = '1';
		i++;
	}

	return (s);
}


