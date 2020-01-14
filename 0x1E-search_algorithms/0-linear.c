#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in a array of integers.
 * @array: pointer to the array
 * @size: size of the array
 * @value: value to search
 * Return: the pointer to a new node at the beginning of a dlistint_t list
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
