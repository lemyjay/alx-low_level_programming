#include "main.h"

/**
 * _wildcmp - A helper function that compares two strings with wildcard
 *
 * @s1: First string
 * @s2: Second string with wildcards
 * @skip: Flag indicating whether to skip a character in s1
 * Return: 1 if the strings can be considered identical, otherwise 0
 */

int _wildcmp(char *s1, char *s2, int skip)
{
	if (*s2 == '*')
	{
		return (_wildcmp(s1, s2 + 1, 1) || (*s1 && _wildcmp(s1 + 1, s2, 0)));
	}
	if (*s1 == *s2)
	{
		if (*s1 == '\0') /* If both strings end, they are identical */
		{
			return (1);
		}
		return (_wildcmp(s1 + 1, s2 + 1, 0)); /* Compare next characters */
	}
	if (skip)
	{
		return (*s1 && _wildcmp(s1 + 1, s2, 1));
	}
	return (0); /* Characters don't match */
}

/**
 * wildcmp - A function that compares two strings with wildcard
 *
 * @s1: First string
 * @s2: Second string with wildcards
 * Return: 1 if the strings can be considered identical, otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	return (_wildcmp(s1, s2, 0));
}
