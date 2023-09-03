#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * rot13 - A function that encodes a string using rot13.
 * ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13)
 * is a simple letter substitution cipher that replaces a letter
 * with the 13th letter after it in the latin alphabet.
 * ROT13 is a special case of the Caesar cipher
 * which was developed in ancient Rome.
 *
 * @s: a pointer that holds the address that points to the string
 * Return: the string encoded in ROT13.
 */

char *rot13(char *s)
{
	int a;
	int b;
	char rot1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (rot1[b] == s[a])
			{
				s[a] = rot2[b];
				break;
			}
		}
	}

	return (s);
}
