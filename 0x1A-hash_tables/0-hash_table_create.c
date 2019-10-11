#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_create - returns a hash table
 * @size: size of the hash table
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *htable = NULL;
	unsigned long int index = 0;

	if (!size)
		return (NULL);
	htable = malloc(sizeof(hash_table_t));
	if (htable == NULL)
		return (NULL);
	htable->size = size;
	htable->array = malloc(sizeof(hash_node_t *) * size);
	if (htable->array == NULL)
	{
		free(htable);
		return (NULL);
	}
	for (index = 0; index < size; index++)
		htable->array[index] = NULL;
	return (htable);
}
