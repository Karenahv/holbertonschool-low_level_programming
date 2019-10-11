#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_djb2 - create hash.
 * @str: string
 *
 * Return: hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 0;
	int c = 0;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
