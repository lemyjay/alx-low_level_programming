#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 *
 * @s: a pointer that holds the address that points to the string
 * Return: length of the string as an integer value
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}

/**
 * is_palindrome - A function that checks if a string is a palindrome or not
 * An empty string is considered a palindrome.
 *
 * @s: a pointer that holds the address to the string to be checked
 * Return: 1 if a palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int length = _strlen(s);

	if (length <= 1)
		return (1); /* Empty string or single character is a palindrome */
	else if (s[0] == s[length - 1])
		/* Move to the next characters and check recursively */
		return (is_palindrome(s + 1));
	else
		return (0); /* Not a palindrome */
}
