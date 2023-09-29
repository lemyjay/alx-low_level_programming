#include "main.h"

/**
 * clear_bit - A function that sets the value of a bit to 0 at a given index.
 *
 * @n: the number on which the operation is to be performed.
 * @index: the index, starting from 0 of the bit to be set.
 *
 * Return: 1 if it worked, or -1 if an error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
