#include "main.h"

/**
 * _atoi - a program that convert a string to an integer
 *
 * @s: the pointer to the string to be converted
 * Return: an integer
 */

int _atoi(char *s)
{
	int length = 0;
	unsigned int ab = 0;
	int cba = 1;
	int bsb = 0;

	while (s[length])
	{
		if (s[length] == 45)
		{
			cba *= -1;
		}
		while (s[length] >= 48 && s[length] <= 57)
		{
			bsb = 1;
			ab = (ab * 10) + (s[length] - '0');
			length++;
		}
		if (bsb == 1)
		{
			break;
		}
		length++;
	}
	ab *= cba;
	return (ab);
}
