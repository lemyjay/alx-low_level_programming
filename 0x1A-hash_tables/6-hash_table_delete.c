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
        hash_node_t *current = ht->array[0];
        unsigned long int size = ht->size, i;

        free(ht->array);
        free(ht);
        for (i = 0; i < size; i++)
        {
            hash_node_t *temp = current[i + 1], *temp1 = current;

            while (current != NULL)
            {
                current = current->next;
                free(temp1->key);
                free(temp1->value);
                free(temp1);

            }
            current = temp;
        }

    }
}