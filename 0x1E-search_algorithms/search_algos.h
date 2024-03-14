#ifndef _SEARCH_H_
#define _SEARCH_H_

/* Headers to include */
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

/* Prototypes for the tasks */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif /* _SEARCH_H_*/
