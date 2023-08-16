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
	int lastdigit;

	if (num < 0)
	{
		num = -num;
		lastdigit = num % 10;
	}
	/*else if (num == 0)
		lastdigit = 0;*/
	else
		lastdigit = num % 10;
	_putchar(lastdigit + '0');
	return (lastdigit);
}
