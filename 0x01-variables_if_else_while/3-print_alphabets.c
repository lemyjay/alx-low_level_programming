#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	/*The decimal value for lowercase 'a' is 97 and that of 'z' is 123*/
	for (a = 97; a < 123; a++)
		putchar(a);
	/*The decimal value for uppercase 'A' is 65 and that or 'z' is 91*/
	for (a = 65; a < 91; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
