#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - A function that returns the length of a string
 *
 * @s: a pointer that holds the address that points to the string
 * Return: length of the string as an integer value
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}

/**
 * is_palindrome_recursive - Check if a string is a palindrome using recursion
 *
 * @s: The input string
 * @start: The starting index
 * @end: The ending index
 * Return: 1 if it's a palindrome, 0 otherwise
 */

int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_recursive(s, start + 1, end - 1));
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
	int length = _strlen_recursion(s);

	return (is_palindrome_recursive(s, 0, length - 1));
}
