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
	{
		if (a != 101 && a != 113)
			putchar(a);
	}
	putchar('\n');
	return (0);
}
