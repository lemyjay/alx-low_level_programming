#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

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
 * create_file - A function that creates a file. The created file must have
 * these permissions: rw-------. If the file already exists, the permissions
 * are not changed but rather, the file is truncated.
 * If text_content is NULL, an empty file is created.
 *
 * @filename: is the name of the file to be created.
 * @text_content: a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1;
 * - on failure (file cannot be created, file cannot be written, write "fails",
 * etc...)
 * - if fileneme is NULL.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		ssize_t b_written = write(file_descriptor,
		text_content, _strlen(text_content));

		if (b_written == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}
