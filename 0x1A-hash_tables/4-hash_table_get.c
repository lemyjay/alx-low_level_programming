#include "hash_tables.h"

/**
 * hash_table_get - A function that retrieves a value associated with a key.
 * 
 * @ht: The hash table to look into
 * @key: The key to be searched
 * 
 * Return: the value associated with the element, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    hash_node_t *current;

    index = key_index((unsigned char *)key, ht->size);
    current = ht->array[index];
    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
            return (current->value);
        current = current->next;
    }

    return (NULL);
}