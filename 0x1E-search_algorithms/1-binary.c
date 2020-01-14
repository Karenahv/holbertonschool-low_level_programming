#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a array of integers.
 * @array: pointer to the array
 * @size: size of the array
 * @value: value to search
 * Return: index location of the value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t m, i, j;
	int array2[500];

	if (array == NULL)
		return (-1);
	j = 0;
	m = (0 + (size - 1)) / 2;
	printf("Searching in array: ");
	for (j = 0; j < size; j++)
	{
		if (j != (size-1))
			printf("%d, ", array[j]);
		else
			printf("%d\n", array[j]);
	}
	if (array[m] < value)
	{
		i = 0;
		printf("Searching in array: ");
		for (j = m + 1; j < size; j++)
		{
			array2[i] = array[j];
			if (j != (size - 1))
				printf("%d, ", array[j]);
			else
				printf("%d\n", array[j]);
			i = i + 1;
		}
		return (search_value_half(array2, value, m));
	}
	else if (array[m] > value)
	{
		printf("Searching in array: ");
		for (j = 0; j < m; j++)
		{
			array2[j] = array[j];
			if (j != (m - 1))
				printf("%d, ", array[j]);
			else
				printf("%d\n", array[j]);
		}
		return (search_value_half(array2, value, m));
	}
	return (-1);

}

/**
* binary_search - searches for a value in a array of integers.
* @array: pointer to the array
* @size: size of the array
* @value: value to search
* Return: index location of the value
*/
int search_value_half(int *array2, int value, int m)
{

	int  l, r, i, m2;

	l = 0;
	r = m;
	m2 = 0;
	printf("Searching in array: ");
	while (l <= r)
	{
		m2 = (l + r) / 2;
		if (array2[m2] == value)
		{
			for (i = m2; i < m; i++)
			{
				if (i != m - 1)
					printf("%d, ", array2[i]);
				else
					printf("%d\n", array2[i]);
			}
			return (m2);
		}
		if (array2[m2] <= value || m2 == (m - 1))
		{
			if (m2 == 1 || m2 == r)
			{
				printf("%d\n", array2[m2]);
				return (-1);
			}
			l = m2 + 1;
			printf("%d, ", array2[l]);
		}
		else
		{
			r = m2 - 1;
			printf("%d, ", array2[2]);
		}
	}

	return (-1);



}
