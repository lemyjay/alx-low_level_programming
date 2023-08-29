#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strspn - A function that gets the length of a prefix substring.
 *
 * @s: a pointer that holds the address to the string on which the operation
 * is to be performed
 * @accept: a pointer that holds the address to the character to search
 * Return: the number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break; /* Exit the inner loop when a match is found*/
			}
		}
		if (accept[j] == '\0')
			/* The character from s is not present in accept, stop counting */
			break;
	}
	return (count);
}
