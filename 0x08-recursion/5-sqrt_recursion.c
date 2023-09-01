#include "main.h"

/**
 * _sqrt_recursive - A helper function that recursively searches for
 * the square root utilizing a binary search
 *
 * @n: The number for which to find the square root
 * @start: The start of the range to search
 * @end: The end of the range to search
 * Return: The square root if found, otherwise -1
 */

int _sqrt_recursive(int n, int start, int end)
{
	if (start <= end)
	{
		int mid = (start + end) / 2;
		int midSquared = mid * mid;

		if (midSquared == n)
		{
			return (mid);
		}
		else if (midSquared < n)
			return (_sqrt_recursive(n, mid + 1, end));
		else
			return (_sqrt_recursive(n, start, mid - 1));
	}
	return (-1); /* If no natural square root found */
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
	if (n < 0)
		return (-1);
	return (_sqrt_recursive(n, 0, n));
}
