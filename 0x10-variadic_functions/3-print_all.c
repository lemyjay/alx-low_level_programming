#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - A function that prints anything, followed by a new line.
 *
 * @format: a pointer that points to a list of types of arguments to the
 * function; c - char, i - integer, f - float, s - char * (if the string is
 * NULL, prints (nil) instead. Any other char should be ignored.
 *
 * Returns void.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				{
					char *str = va_arg(args, char *);

					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
				}
				break;
			default:
				i++;
				continue;
		}

		separator = ", ";
		i++;
	}

	printf("\n");

	va_end(args);
}
