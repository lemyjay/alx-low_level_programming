#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_string - A function that sets the value of a pointer to a char.
 *
 * @to: a pointer that the address of the char that is to make the change
 * @s: a pointer whose value is to be changed
 * Returns void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
