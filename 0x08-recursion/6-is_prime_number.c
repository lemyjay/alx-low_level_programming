#include "main.h"

/**
 * check - the function that actually does the checking of the number
 *
 * @a: the number or factor to start with
 * @b: holds the value of n, which is the number to be checked
 * Return: an integer
 */

int check(int a, int b)
{
	if (b <= 1)
		return (0);
	if (a == b)
		return (1);
	if (b % a == 0)
		return (0);
	return (check(a + 1, b));
}


/**
 * is_prime_number - A function that checks if a give number is prime or not
 *
 * @n: hold the value of the number to be checked
 * Return: 1 if prime, otherwise 0
 */

int is_prime_number(int n)
{
	return (check(2, n));
}
