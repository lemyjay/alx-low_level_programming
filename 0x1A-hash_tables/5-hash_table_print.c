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
        char *str = "";
        unsigned long int i, arr_size = ht->size;
        
        if (ht->array == NULL)
            return;
        for (i = 0; i < arr_size; i++)
        {
            current = ht->array[i];
            if (current != NULL)
            {
                sprintf(str, "'%s' : '%s'", current->key, current->value);
                current = current->next;
                while (current != NULL)
                {
                    sprintf(str, "'%s' : '%s'", current->key, current->value);
                    current = current->next;
                }
            }

                
        }

        printf("%s", str);

    }
}