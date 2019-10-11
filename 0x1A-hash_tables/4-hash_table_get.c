#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_get - create hash.
 * @ht: hash table
 * @key: key
 * Return: index of a key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp = NULL;
	unsigned long int index = 0;
	char *value;
	int flag = 0;

	if (ht == NULL || key == NULL)
		return (NULL);
	if (*key == 0 || ht->array == NULL || ht->size == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			value = temp->value;
			flag = 1;
			return (value);
		}
		temp = temp->next;
	}
	if (flag == 0)
		return (NULL);
	return (NULL);
}
