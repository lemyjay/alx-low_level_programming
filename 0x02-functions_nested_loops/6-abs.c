#include "main.h"

/**
 * _abs - Entry point to function
 *
 * finds the absolute value of an integer
 * @num: holds the integer to which you are to find the absolute
 * Return: absolute value of integer
 */
int _abs(int num)
{
	if (num < 0)
		num = -num;
	return (num);
}
