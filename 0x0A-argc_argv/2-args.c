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
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
