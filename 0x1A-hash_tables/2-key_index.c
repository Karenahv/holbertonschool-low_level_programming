#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * key_index - create hash.
 * @key: key
 * @size: size
 * Return: index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int hash = 0;

	index = 0;
	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
