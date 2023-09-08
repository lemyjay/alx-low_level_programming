#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _print - this moves a string one place
 * @str: the string to move
 * @len: the size of string
 *
 * Return: void
 */

void _print(char *str, int len)
{
	int x, y;

	x = y = 0;
	while (x < len)
	{
		if (str[x] != '0')
			y = 1;
		if (y || x == len - 1)
			_putchar(str[x]);
		x++;
	}

	_putchar('\n');
	free(str);
}

/**
 * mult - this multiplies a char
 * @n: the char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index of num
 * @dest: destination of multiplication
 * @dest_index: highest index to start addition
 * Return: the pointer to dest, ||  NULL on failure
 */

char *mult(char n, char *num, int num_index, char *dest, int dest_index)
{
	int y, k, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (y = num_index, k = dest_index; y >= 0; y--, k--)
	{
		mul = (n - '0') * (num[y] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[k] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	for (addrem += mulrem; k >= 0 && addrem; k--)
	{
		add = (dest[k] - '0') + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}

/**
 * check_arguments - checks the arguments to ensure they are digits
 * @av: pointer to arguments
 *
 * Return: 0 if && 1 if not
 */

int check_arguments(char **av)
{
	int x, y;

	for (x = 1; x < 3; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			if (av[x][y] < '0' || av[x][y] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * init - initializes a string
 * @str: the string to initialize
 * @length: the length of string
 * Return: void
 */

void init(char *str, int length)
{
	int x;

	for (x = 0; x < length; x++)
		str[x] = '0';
	str[x] = '\0';
}

/**
 * main - multiplies
 * @argc: the number of arguments
 * @argv: the argument vector
 *
 * Return: zero || exit status of 98 if failure
 */

int main(int argc, char *argv[])
{
	int l1, l2, ln, ti, x;
	char *a;
	char *t;
	char errorMsg[] = "Error\n";

	if (argc != 3 || check_arguments(argv))
	{
		for (ti = 0; errorMsg[ti]; ti++)
			_putchar(errorMsg[ti]);
		exit(98);
	}
	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;
	ln = l1 + l2 + 1;
	a = malloc(ln * sizeof(char));
	if (a == NULL)
	{
		for (ti = 0; errorMsg[ti]; ti++)
			_putchar(errorMsg[ti]);
		exit(98);
	}
	init(a, ln - 1);
	for (ti = l2 - 1, x = 0; ti >= 0; ti--, x++)
	{
		t = mult(argv[2][ti], argv[1], l1 - 1, a, (ln - 2) - x);
		if (t == NULL)
		{
			for (ti = 0; errorMsg[ti]; ti++)
				_putchar(errorMsg[ti]);
			free(a);
			exit(98);
		}
	}
	_print(a, ln - 1);
	return (0);
}
