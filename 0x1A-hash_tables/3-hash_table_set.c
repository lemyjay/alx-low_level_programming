#include "hash_tables.h"

/**
 * hast_table_set - A function that adds an element to the hash table
 * 
 * @ht: The hash table you want to add or update the key/value to 
 * @key: The key, which cannot be an empty string 
 * @value: The value associated with the key. It is to be duplicated and
 * can be an empty string.
 * 
 * Return: 1 if it succeeded, 0 otherwise 
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t **current = ht->array;
    hash_node_t *temp = NULL;

    index = key_index((const unsigned char *)key, 1024/*((sizeof(ht->array)) / (sizeof(hash_node_t *)))*/);
    if (current[index] == NULL)
    {
        hash_node_t *node = malloc(sizeof(hash_node_t));

        if (node == NULL)
            return (0);
        node->key = (char *)key;
        node->value = strdup(value);
        
        current[index] = node;
    }
    else
    {
        hash_node_t *node = malloc(sizeof(hash_node_t));

        if (node == NULL)
            return (0);
        node->key = (char *)key;
        node->value = strdup(value);

        temp = current[index]->next;
        while (temp != NULL)
            temp = temp->next;
        
        temp = node;

    }

    return (1);
}