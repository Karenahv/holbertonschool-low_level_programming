#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Entry point
 *@size: size of the array
 *@c: character
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if (size != 0)
	{
		*array = c;
		for (i = 0; i < size; i++)
			array[i] = c;
	} else
	{
		return ('\0');
	}
	return (array);
}
