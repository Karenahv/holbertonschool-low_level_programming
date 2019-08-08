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
	unsigned long int var, mask;

	var = 0;
	mask = 1;
	if (index > 63)
		return (-1);
	var = *n | (mask << index);
	*n = var;
	return (1);
}
