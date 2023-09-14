#include <stdlib.h>
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
	int number_of_bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	/* Pointer to the main function */
	int (*main_ptr)(int argc, char *argv[]) = &main;

	/* Convert the function pointer to a pointer to unsigned char */
	unsigned char *main_bytes = (unsigned char *)main_ptr;

	for (i = 0; i < number_of_bytes; i++)
	{
		printf("%02x", main_bytes[i]);

		if (i < number_of_bytes - 1)
			printf(" ");
	}

	printf("\n");

	return (0);
}
