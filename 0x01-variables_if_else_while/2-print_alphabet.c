#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	/*The decimal value for lowercase 'a' in ASCII is 97 and that of 'z' is 122*/
	for (a = 97; a < 123; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
