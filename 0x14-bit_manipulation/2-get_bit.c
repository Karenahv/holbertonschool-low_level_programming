#include <stdio.h>
#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: decimal number
 * @index: index
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int binary, var;

	binary = 0;
	var = 0;
	if (index > 63)
		return (-1);
	binary = (n >> index);
	var = binary & 1;
	if (var)
		return (1);
	else
		return (0);
	return (-1);
}
