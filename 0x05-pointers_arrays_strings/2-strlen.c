/**
 * _strlen - A function that returns the length of a string..
 *
 * @s: a pointer that holds the address of the string
 * Return: returns an integer.
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
