#include "hash_tables.h"

/**
 * hash_table_delete - A function that deletes a hash table.
 * 
 * @ht: The hash table
 */
void hash_table_delete(hash_table_t *ht)
{
    if (ht != NULL)
    {
        unsigned long int size = ht->size, i;

        for (i = 0; i < size; i++)
        {
            hash_node_t *current = ht->array[i];

            while (current != NULL)
            {
                hash_node_t *temp = current->next;

                free(current->key);
                free(current->value);
                free(current);
                
                current = temp;

            }
        }

        free(ht->array);
        free(ht);

    }
}