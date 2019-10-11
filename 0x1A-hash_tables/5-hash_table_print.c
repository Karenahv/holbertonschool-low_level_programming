#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_print - print hash table
 * @ht: hash table
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned int i = 0;
	int flag = 0;


	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		for (temp = ht->array[i]; temp != NULL; temp = temp->next)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			flag = 1;

		}
		i++;
	}
	printf("}\n");
}
