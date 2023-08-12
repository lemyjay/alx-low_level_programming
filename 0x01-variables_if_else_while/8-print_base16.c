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
	for (a = 0; a < 16; a++)
	{
		if (a < 10)
			putchar(a + '0');
		else
			putchar((a - 10) + 97);
	}
	putchar('\n');
	return (0);
}
