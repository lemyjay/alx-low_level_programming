#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table
 *
 * @size: the size of the array(table)
 *
 * Return: a pointer to a newly created hash table OR NULL if it fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	new = malloc(sizeof(hash_table_t));
	if (new != NULL)
	{
		new->array = malloc(sizeof(hash_node_t *) * size);
		new->size = size;

		if (new->array == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	else
		return (NULL);

	for (i = 0; i < size; ++i)
		new->array[i] = NULL;

	return (new);
}
