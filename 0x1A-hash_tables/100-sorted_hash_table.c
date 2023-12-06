#include "hash_tables.h"


/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the array.
 * Return: A pointer to the newly created hash table, or NULL on failure.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *ht;
    unsigned long int i;

    ht = malloc(sizeof(shash_table_t));
    if (ht == NULL)
        return (NULL);

    ht->size = size;
    ht->array = malloc(sizeof(shash_node_t *) * size);
    if (ht->array == NULL)
    {
        free(ht);
        return (NULL);
    }

    for (i = 0; i < size; ++i)
        ht->array[i] = NULL;

    ht->shead = NULL;
    ht->stail = NULL;

    return (ht);
}

/**
 * shash_table_set - Adds an element to the sorted hash table.
 * @ht: The sorted hash table.
 * @key: The key, which cannot be an empty string.
 * @value: The value associated with the key. It can be an empty string.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    shash_node_t *new_node = NULL, *current = NULL;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    index = key_index((unsigned char *)key, ht->size);
    current = ht->shead;

    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
        {
            free(current->value);
            current->value = strdup(value);
            if (current->value == NULL)
                return (0);
            return (1);
        }
        current = current->snext;
    }

    /* Key doesn't exist, create a new node */
    new_node = malloc(sizeof(shash_node_t));
    if (new_node == NULL)
        return (0);

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    if (new_node->key == NULL || new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node->value);
        free(new_node);
        return (0);
    }

    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    shash_sorted_insert(ht, new_node);

    return (1);
}

/**
 * shash_sorted_insert - Inserts a node into the sorted linked list of the sorted hash table.
 * @ht: The sorted hash table.
 * @new_node: The new node to be inserted.
 */
void shash_sorted_insert(shash_table_t *ht, shash_node_t *new_node)
{
    shash_node_t *current = ht->shead;

    if (current == NULL || strcmp(current->key, new_node->key) >= 0)
    {
        new_node->snext = current;
        new_node->sprev = NULL;
        if (current != NULL)
            current->sprev = new_node;
        ht->shead = new_node;
    }
    else
    {
        while (current->snext != NULL && strcmp(current->snext->key, new_node->key) < 0)
            current = current->snext;

        new_node->snext = current->snext;
        new_node->sprev = current;
        if (current->snext != NULL)
            current->snext->sprev = new_node;
        current->snext = new_node;
    }

    if (new_node->snext == NULL)
        ht->stail = new_node;
}

/**
 * shash_table_get - Retrieves the value associated with a key in the sorted hash table.
 * @ht: The sorted hash table.
 * @key: The key to search for.
 * Return: The value associated with the key, or NULL if the key is not found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    unsigned long int index;
    shash_node_t *current = NULL;

    if (ht == NULL || key == NULL || *key == '\0')
        return (NULL);

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

/**
 * shash_table_print - Prints the sorted hash table in order of the sorted linked list.
 * @ht: The sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *current = ht->shead;

    printf("{");
    while (current != NULL)
    {
        printf("'%s': '%s'", current->key, current->value);
        if (current->snext != NULL)
            printf(", ");
        current = current->snext;
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - Prints the sorted hash table in reverse order of the sorted linked list.
 * @ht: The sorted hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *current = ht->stail;

    printf("{");
    while (current != NULL)
    {
        printf("'%s': '%s'", current->key, current->value);
        if (current->sprev != NULL)
            printf(", ");
        current = current->sprev;
    }
    printf("}\n");
}

/**
 * shash_table_delete - Deletes the sorted hash table.
 * @ht: The sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
    unsigned long int i;
    shash_node_t *current, *temp;

    if (ht != NULL)
    {
        for (i = 0; i < ht->size; i++)
        {
            current = ht->array[i];

            while (current != NULL)
            {
                temp = current->next;
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
