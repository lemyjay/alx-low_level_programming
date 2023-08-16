#include "main.h"

/**
 * print_last_digit - Entry point to function
 *
 * finds the value of the last digit of an integer
 * @num: holds the integer
 * Return: value of the last digit
 */
int print_last_digit(int num)
{
	int lastdigit = num % 10;

	if (lastdigit < 0)
		lastdigit *= -1;
	_putchar(lastdigit + '0');
	return (lastdigit);
}
