#include "main.h"

/**
 * factorial - A function that returns the factorial of a given number
 *
 * @n: holds the value of the number to which the factorial is to be found
 * Return: -1 if n is lower than 0, else factorial
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n > 0)
		return (n * factorial(n - 1));
	else
		return (-1);
}
