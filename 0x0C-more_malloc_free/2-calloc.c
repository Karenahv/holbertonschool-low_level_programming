#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Entry point
 *@width: rows of matrix
 *@height: columns of string
 * Return: a pointer to a 2 dimensional array of integers or null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array = NULL;
	unsigned int i;
	int t;
	char *f;

	t = nmemb * size;
	array= malloc(t);
	if (size == 0 || nmemb == 0)
		return (NULL);
	f = (char *)array;
	if (f != NULL)
	{
		for (i = 0; i < size; i++)
			f[i] = 0;
		return (f);
	} else
	{
		return (NULL);
	}
}
