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
	for (a = 122; a > 96; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
