#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index.
 *
 * @n: the number on which the operation is to be performed.
 * @index: the index, starting from 0 of the bit to be gotten.
 *
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
