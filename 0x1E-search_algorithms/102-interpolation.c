#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>


/**
 * interpolation_search - searches for a value in a array of integers.
 * @array: pointer to the array
 * @size: size of the array
 * @value: value to search
 * Return: the index of the value founded
 */
int interpolation_search(int *array, size_t size, int value)
{

	size_t pos, lo, hi;

	if (array == NULL)
		return (-1);
	lo = 0;
	hi = (size - 1);
	pos = lo + (((double)(hi - lo) / (array[hi] - array[lo])) *
	      (value - array[lo]));
	if (pos >= size)
	{
		printf("Value checked array[%d] is out of range\n", (int)pos);
	}
	while (lo <= hi && value >= array[lo] && value <= array[hi])
	{
		if (lo == hi)
		{
			if (array[lo] == value)
				return (lo);
			else
				return (-1);
		}
		pos = lo + (((double)(hi - lo) / (array[hi] - array[lo])) *
			    (value - array[lo]));

		if (pos >= size)
		{
			printf("Value checked array[%d] is out of range", (int)pos);

		}

		printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			lo = pos + 1;
		else
			hi = pos - 1;
	}
	return (-1);
}
