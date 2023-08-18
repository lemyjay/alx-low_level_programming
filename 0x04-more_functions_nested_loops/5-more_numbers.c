#include "main.h"

/**
 * more_numbers - Name of function and entry point to function
 *
 * prints the numbers from 0 to 9 except for 2 and 4
 * Returns void
 */
void more_numbers(void)
{
	int i, a, b;
	int counter = 0;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 2; b++)
		{
			for (i = 48; i <= 57; i++)
			{
				if (counter < 15)
				{
					if (b == 1)
						_putchar(49);
					_putchar(i);
					counter++;
				}
			}
		}
		_putchar('\n');
		counter = 0;
	}
}
