#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Entry point
 *@ptr: pointer to the memory previously allocated
 *@old_size: size of the allocated ptr
 *@new_size: size of new memory block
 * Return: a pointer to an array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *array = NULL;
	char *p = NULL;
	int i, t;
	char *pp = NULL;
	char *px = NULL;

	if (ptr == NULL)
	{
		array = malloc(new_size);
		free(ptr);
		return (array);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);

	}
	if (new_size ==  old_size)
		return (ptr);
	if (new_size < old_size)
	{
		t = old_size - new_size;
		pp = (char *)ptr;
		for (i = 0; i < t; i++)
			free((pp + t + i));
		return (pp);
	}
	p = malloc(new_size);
	if (p != NULL)
	{
		if (new_size > old_size)
		{
			t = new_size;
			px = (char *)ptr;
			for (i = 0; i < t; i++)
				p[i] = px[i];
			return (p);
		}
	}
	free(p);
	return (NULL);
}
