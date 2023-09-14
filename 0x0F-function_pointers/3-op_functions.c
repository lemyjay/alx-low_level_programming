#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Adds the two integers
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts or finds the difference of the two integers
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies the two integers
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides the fisrt integer by the second integer
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the result of the division of a by b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Finds from the first integer the modulos of the second
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
