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
	int product = 0;

	if (argc > 1)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);

		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
