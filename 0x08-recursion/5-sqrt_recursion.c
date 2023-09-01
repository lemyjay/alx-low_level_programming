#include "main.h"

/**
 * _sqrt_check - A helper function that recursively searches for
 * the square root
 *
 * @a: integer to be incremented and multiplied by itself until b(which holds
 * the value of n) is found.
 * @b: hold the value of n.
 * Return: an integer, 1 or -1
 */

int _sqrt_check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (_sqrt_check(a + 1, b));
}

/**
 * _sqrt_recursion - A function that returns the natural square root
 * of a number
 *
 * @n: holds the number to which its natural square root is to be computed
 * Return: -1 if n does not have a natural squar root, else square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt_check(1, n));
}
