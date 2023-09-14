#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - The function that selects the correct function to perform the
 * operation asked by the user.
 *
 * @s: a pointer to the operator passed.
 *
 * Return: a pointer to the function that corresponds to the operator given
 * as a parameter. If s does not match any of the 5 expected operators
 * (+, -, *, /, %), return NULL
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0 && ops[i].op[1] == '\0')
			return (ops[i].f);
		i++;
	}

	printf("Error\n");
	exit(99);
	return (NULL);
}
