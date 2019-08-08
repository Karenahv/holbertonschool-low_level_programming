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
	unsigned long int mask, var;

	var = 0;
	mask = 1;
	if (index > 63)
		return (-1);
	var = *n & ~(mask << index);
	*n = var;
	return (1);
}
