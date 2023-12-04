#include "hash_tables.h"

/**
 * hash_table_print - A function that prints a hash table
 * 
 * @ht: The hash table 
 */
void hash_table_print(const hash_table_t *ht)
{
    if (ht != NULL)
    {
        hash_node_t *current;
        int first_node = 1;
        unsigned long int i, arr_size = ht->size;
        
        if (ht->array == NULL)
            return;
        printf("{");
        for (i = 0; i < arr_size; i++)
        {
            current = ht->array[i];
            while (current != NULL)
            {
                if (!first_node)
                    printf(", ");
                printf("'%s' : '%s'", current->key, current->value);
                current = current->next;
                first_node = 0;
            }
                
        }

        printf("}\n");

    }
}