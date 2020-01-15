#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * exponential_search - searches for a value in a array of integers.
 * @array: pointer to the array
 * @size: size of the array
 * @value: value to search
 * Return: the index of the value founded
 */
int exponential_search(int *array, size_t size, int value)
{

	size_t i = 1, min = 0;

	if (array == NULL)
		return (-1);
	if (array[0] == value)
		return (0);
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		i = i * 2;
	}
	if (i < size)
		min = i;
	else
		min = size - 1;
	printf("Value found between indexes [%d] and [%d]\n", (int)i / 2, (int)min);
	return (binary_search2(array, i / 2, min, value));
}


/**
 * print_array - searches for a value in a array of integers.
 * @array: pointer to the array
 * @l: size of the array
 * @r: value to search
 * Return: index location of the value
 */
void print_array(int *array, size_t l, size_t r)
{
	printf("Searching in array: ");
	for (; l < r; l++)
		printf("%d, ", array[l]);
	printf("%d\n", array[l]);
}

/**
 * binary_search2 - searches for a value in a array of integers.
 * @array: pointer to the array
 * @size: size of the array
 * @value: value to search
 * @l: left
 * Return: index location of the value
 */
int binary_search2(int *array, size_t l, size_t size, int value)
{
	size_t r, m;

	if (array == NULL)
		return (-1);
	r = size;
	for (; l < size;)
	{
		print_array(array, l, r);
		m = (l + r) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}
