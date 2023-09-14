#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>

/**
 * main - Entry point to the program
 *
 * @argc: argument counter
 * @argv: argument vector - hold the names of all arguments passed to
 * the program from the command-line from the start of execution.
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (*argv[2] != '+' && *argv[2] != '-'
	&& *argv[2] != '*' && *argv[2] != '/' && *argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
