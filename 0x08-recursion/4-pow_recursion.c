#include "main.h"

/**
 * _pow_recursion - A function that returns the value of x raised to power of y
 *
 * @x: holds the value of the number which is to be multiplied by itself
 * @y: holds the value of the number of times x should be multiplied
 * by itself
 * Return: -1 if y is lower than 0, and 1 if y is equal to 0
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y > 0)
		return (x * _pow_recursion(x, --y));
	else
		return (-1);
}
