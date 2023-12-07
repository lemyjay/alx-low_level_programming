#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size) {
    shash_table_t *ht = malloc(sizeof(shash_table_t));
    if (ht == NULL) return NULL;

    ht->size = size;
    ht->array = calloc(size, sizeof(shash_node_t *));
    if (ht->array == NULL) {
        free(ht);
        return NULL;
    }

    ht->shead = NULL;
    ht->stail = NULL;

    return ht;
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value) {
    if (ht == NULL || key == NULL || *key == '\0') return 0;

    unsigned long int index = key_index((unsigned char *)key, ht->size);
    shash_node_t *new_node = malloc(sizeof(shash_node_t));
    if (new_node == NULL) return 0;

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    if (ht->shead == NULL) {
        ht->shead = new_node;
        ht->stail = new_node;
    } else {
        shash_node_t *current = ht->shead;
        shash_node_t *prev = NULL;
        while (current != NULL && strcmp(current->key, key) < 0) {
            prev = current;
            current = current->snext;
        }
        if (prev == NULL) {
            new_node->snext = ht->shead;
            ht->shead->sprev = new_node;
            ht->shead = new_node;
        } else if (current == NULL) {
            new_node->sprev = ht->stail;
            ht->stail->snext = new_node;
            ht->stail = new_node;
        } else {
            new_node->sprev = prev;
            new_node->snext = current;
            prev->snext = new_node;
            current->sprev = new_node;
        }
    }

    return 1;
}

char *shash_table_get(const shash_table_t *ht, const char *key) {
    if (ht == NULL || key == NULL || *key == '\0') return NULL;

    unsigned long int index = key_index((unsigned char *)key, ht->size);
    shash_node_t *current = ht->array[index];
    while (current != NULL) {
        if (strcmp(current->key, key) == 0) {
            return current->value;
        }
        current = current->next;
    }
    return NULL;
}

void shash_table_print(const shash_table_t *ht) {
    if (ht == NULL) return;

    shash_node_t *current = ht->shead;
    while (current != NULL) {
        printf("{'%s': '%s'}", current->key, current->value);
        if (current->snext != NULL) printf(", ");
        current = current->snext;
    }
    printf("\n");
}

void shash_table_print_rev(const shash_table_t *ht) {
    if (ht == NULL) return;

    shash_node_t *current = ht->stail;
    while (current != NULL) {
        printf("{'%s': '%s'}", current->key, current->value);
        if (current->sprev != NULL) printf(", ");
        current = current->sprev;
    }
    printf("\n");
}

void shash_table_delete(shash_table_t *ht) {
    if (ht == NULL) return;

    for (unsigned long int i = 0; i < ht->size; i++) {
        shash_node_t *current = ht->array[i];
        while (current != NULL) {
            shash_node_t *temp = current;
            current = current->next;
            free(temp->key);
            free(temp->value);
            free(temp);
        }
    }

    free(ht->array);
    free(ht);
}