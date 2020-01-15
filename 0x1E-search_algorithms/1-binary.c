#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

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
 * binary_search - searches for a value in a array of integers.
 * @array: pointer to the array
 * @size: size of the array
 * @value: value to search
 * Return: index location of the value
 */
int binary_search(int *array, size_t size, int value)
{

	size_t l, r, m;

	if (array == NULL)
		return (-1);
	r = size - 1;
	for (l = 0; l < size;)
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
