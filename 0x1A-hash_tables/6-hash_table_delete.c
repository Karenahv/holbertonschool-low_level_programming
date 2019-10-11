#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_delete - print hash table
 * @ht: hash table
 * Return: no return
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp = NULL, *temp2 = NULL;
	unsigned int i = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			temp2 = temp;
			temp = temp->next;
			free(temp2->key);
			free(temp2->value);
			free(temp2);
		}
		i++;
	}
	free(temp);
	free(ht->array);
	free(ht);
}
