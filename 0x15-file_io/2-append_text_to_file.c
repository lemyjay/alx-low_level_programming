#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * _strlen - A function that returns the length of a string.
 *
 * @str: a pointer to the string
 *
 * Return: the length of the string.
 */
int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;

	return (length);
}

/**
 * append_text_to_file - A function that appends text at the end of a file.
 * File is not created if it does not exist.
 *
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add as the end of the file.
 *
 * Return: 1 on success and -1 on failure or if filename is NULL.
 * - If text_content is NULL, nothing is added to the file. Return 1 if the
 * file exists and -1 if the file does not exist or if does not have the
 * required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t b_written;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	b_written = write(file_descriptor, text_content, _strlen(text_content));
	if (b_written == -1)
	{
		close(file_descriptor);
		return (-1);
	}

	close(file_descriptor);
	return (1);
}
