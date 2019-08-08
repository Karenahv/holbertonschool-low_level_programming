#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: decimal number
 * @index: index
 * Return: 1 if it worked or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int binary, var;

	binary = 0;
	var = 0;
	if (index > 63 || n = NULL)
		return (-1);
	binary = (*n >> index);
	var = binary | 1;
	if (var)
	{
		*n = ~(~var | 1) << index;
		return (1);
	}
	return (-1);
}
