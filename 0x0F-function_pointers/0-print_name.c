#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - A function that prints a name
 *
 * @name: the pointer to the name to be printed
 * @f: the pointer to the function that take in a pointer of type char as
 * an argument
 * Returns void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
