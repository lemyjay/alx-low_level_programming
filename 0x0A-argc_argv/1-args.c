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
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
