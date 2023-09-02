#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to the program
 *
 * @argc: argument counter
 * @argv: argument vector; holds the names of all arguments passed to
 * the program from the command-line from the start of execution.
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int cents = 0, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);

		if (cents < 0)
		{
			printf("0\n");
			return (0);
		}
		else
		{
			while (cents > 0)
			{
				if (cents >= 25)
					cents -= 25;
				else if (cents >= 10)
					cents -= 10;
				else if (cents >= 5)
					cents -= 5;
				else if (cents >= 2)
					cents -= 2;
				else
					cents -= 1;

				coins++;
			}

			printf("%d\n", coins);
			return (0);
		}
	}
}
