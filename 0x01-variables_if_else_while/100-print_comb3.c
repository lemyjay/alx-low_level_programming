#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	/*The decimal value for '0' in ASCII is 48 and that of '9' is 58*/
	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			if (a != b && b > a)
			{
				putchar(a);
				putchar(b);
				if (a < 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
