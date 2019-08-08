#include <stdio.h>
#include "holberton.h"

/**
 * flip_bits - returns the number of bits I need to flip to get from one number
 * @n: decimal number 1
 * @m: decimal number 2
 * Return: the number of bits I need to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count, i;

	count = 0;
	for (i = 0; i < 64; i++)
	{

		if (((n >> i) & 1) != ((m >> i) & 1))
		{
			count++;

		}

	}
	return (count);
}
