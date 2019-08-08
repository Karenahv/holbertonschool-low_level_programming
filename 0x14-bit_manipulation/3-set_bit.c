#include <stdio.h>
#include "holberton.h"

/**
 * set_bit - returns the value of a bit at a given index
 * @n: decimal number
 * @index: index
 * Return: 1 if it worked or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int binary, var;

	binary = 0;
	var = 0;
	if (index > 63)
		return (-1);
	binary = (*n >> index);
	var = binary & 1;
	if (!var)
	{
		*n = (binary | 1) << index;
		return (1);
	}
	return (-1);
}
