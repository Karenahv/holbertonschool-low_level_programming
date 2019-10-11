#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_set - create hash.
 * @ht: hash table
 * @key: key
 * @value: value of key
 * Return: index of a key
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *temp = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || value == NULL || !*key)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);

		}
		temp = temp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->value = strdup(value);
	new_node->key = strdup(key);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
