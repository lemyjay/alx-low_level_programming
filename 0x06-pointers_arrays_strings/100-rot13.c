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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z' && s[i] + 13 > 'Z')
			s[i] = 64 + (s[i] - 51) % 26;
		else if (s[i] >= 'a' && s[i] <= 'z' && s[i] + 13 > 'z')
			s[i] = 96 + (s[i] - 83) % 26;
		else if ((s[i] >= 'A' && s[i] <= 'Z' && s[i] + 13 <= 'Z') ||
				(s[i] >= 'a' && s[i] <= 'z' && s[i] + 13 <= 'z'))
			s[i] += 13;
	}

	return (s);
}
