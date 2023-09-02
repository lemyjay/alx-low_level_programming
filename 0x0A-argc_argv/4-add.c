#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	int i, sum = 0;

	if (argc == 1)
	{
		/* If no arguments provided, print 0 and exit successfully.*/
		printf("0\n");

		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		int j;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				/**
				 * If a character is not a digit,
				 * print "Error" and exit with error code 1.
				 */
				printf("Error\n");

				return (1);
			}
		}
		sum += atoi(argv[i]); /* Convert and add the valid numbers.*/
	}
	/* Print the sum of valid numbers.*/
	printf("%d\n", sum);

	return (0);
}
