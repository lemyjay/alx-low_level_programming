#include "main.h"

/**
 * print_sign - Name of function and entry point to function
 * @n:  parameter for holding the value to be checked
 *
 * Return: 1 if (n > 0),0 if (n = 0) and -1 if (n < 0)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
