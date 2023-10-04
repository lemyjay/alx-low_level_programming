#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - A function that reads a text file and prints it to the POSIX
 * standard output.
 *
 * @filename: a pointer to the text file.
 * @letters: the number of letters it should read and print.
 *
 * Return: the actual number of letters it could read and print, 0;
 * - if filename is NULL
 * - if the file cannot be opened or read
 * - if write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t n;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	n = read(file_descriptor, buffer, letters);
	if ((n == -1) || (write(STDOUT_FILENO, buffer, n) != n))
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	free(buffer);
	close(file_descriptor);
	return (n);
}
