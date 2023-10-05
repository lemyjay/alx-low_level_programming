#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/* Declaration of prototypes of subfunctions used in this program */
void handle_error(int error_code, const char *file_name);
int open_source_file(const char *filename);
int open_dest_file(const char *filename);

void copy_file(
int source_fd, int dest_fd, const char *sname, const char *dname);

void close_file(int fd);

/**
 * main - Entry point to a program that copies the content of a file to another
 * file.
 *
 * @argc: the argument counter
 * @argv: the vector of arguments entered.
 *
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	int source_fd, dest_fd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	source_fd = open_source_file(argv[1]);
	dest_fd = open_dest_file(argv[2]);

	copy_file(source_fd, dest_fd, argv[1], argv[2]);

	close_file(source_fd);
	close_file(dest_fd);

	return (0);
}

/**
 * handle_error - handle and print error messages based on the error code.
 *
 * @error_code: the error code
 * @file_name: the name of the file associated with the error
 */
void handle_error(int error_code, const char *file_name)
{
	switch (error_code)
	{
		case 98:
			dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", file_name);
			break;
		case 99:
			dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file_name);
			break;
		case 100:
			dprintf(STDERR_FILENO,
			"Error: Can't close fd %s\n", file_name);
			break;
		default:
			dprintf(STDERR_FILENO, "Error copying files\n");
	}

	exit(error_code);
}

/**
 * open_source_file - open the source file and handle potential errors.
 *
 * @filename: the name of the source file
 *
 * Return: the file descriptor of the source file
 */
int open_source_file(const char *filename)
{
	int source_fd = open(filename, O_RDONLY);

	if (source_fd == -1)
		handle_error(98, filename);

	return (source_fd);
}

/**
 * open_dest_file - open the destination file and handle potential errors.
 *
 * @filename: the name of the destination file
 *
 * Return: the file descriptor of the destination file
 */
int open_dest_file(const char *filename)
{
	int dest_fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (dest_fd == -1 && errno == EEXIST)
		dest_fd = open(filename, O_WRONLY | O_TRUNC);

	if (dest_fd == -1)
		handle_error(99, filename);

	return (dest_fd);
}

/**
 * copy_file - copy the content from source file to destination file.
 *
 * @source_fd: the file descriptor of the source file
 * @dest_fd: the file descriptor of the destination file
 * @sname: the name of the source file
 * @dname: the name of the destination file
 */
void copy_file(
int source_fd, int dest_fd, const char *sname, const char *dname)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			handle_error(99, dname);
	}

	if (bytes_read == -1)
		handle_error(98, sname);
}

/**
 * close_file - close a file descriptor and handle potential errors.
 *
 * @fd: the file descriptor to close
 */
void close_file(int fd)
{
	if (close(fd) == -1)
		handle_error(100, "");
}
