#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>


/**
 * linear_search2 - searches for a value in a array of integers.
 * @array: pointer to the array
 * @size: size of the array
 * @value: value to search
 * @imin: index
 * Return: the pointer to a new node at the beginning of a dlistint_t list
 */
int linear_search2(int *array, size_t size, int value, int imin)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", imin, array[i]);
		if (value == array[i])
			return (imin);
		imin = imin + 1;
	}
	return (-1);
}


/**
 * jump_search - searches for a value in a array of integers.
 * @array: pointer to the array
 * @size: size of the array
 * @value: value to search
 * Return: the index of the value founded
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int jump = 0,  imax = 0, imin = 0, j = 0, z = 0, idxanterior = 0, array2[500];

	if (!array || !size)
		return (-1);
	jump = sqrt(size);
	for (i = 0; i < size;)
	{
		if (array[i] < value)
			printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] >= value || i == size - 1)
		{
			if (i == size - 1)
			{
				imax = i + jump;
				imin = i;
				z = imin; } else
			{
				imax = i;
				imin = idxanterior;
				z = imin; }
			if (i == size - 1)
			{
				for (j = 0; j < imin; j++)
				{
					array2[j] = array[z];
					z = z + 1; }} else
			{
				for (j = 0; j < imax; j++)
				{ array2[j] = array[z];
					z = z + 1; }}
			if (i == size - 1)
			{ printf("Value found between indexes [%d] and [%d]\n", imin, imax);
				return (linear_search2(array2, 1, value, imin)); }
			printf("Value found between indexes [%d] and [%d]\n", imin, imax);
			return (linear_search2(array2, jump + 1, value, imin)); }
		idxanterior = i;
		i = i + jump; }
	return (-1);
}
