#include "main.h"
#include <stdlib.h>

/**
 * print_binary - A function that prints the binary representation of a number
 *
 * @n: the number whose binary representation form is to be printed.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
