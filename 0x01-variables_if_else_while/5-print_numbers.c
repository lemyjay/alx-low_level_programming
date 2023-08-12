#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	/*The decimal value for '0' in ASCII is 48 and that of '9' is 58*/
	for (a = 48; a < 58; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
