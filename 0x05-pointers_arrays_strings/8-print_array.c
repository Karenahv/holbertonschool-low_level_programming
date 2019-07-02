#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_array - Entry point
 *@a: pointer that contains dirección of array
 *@n: number of digits we want to print from the array
 *Return: no return
 */
void print_array(int *a, int n)
{
	int j;

	j = 0;
	while (j < n)
	{
		if (j != n - 1)
			printf("%d, ", a[j]);
		else
			printf("%d", a[j]);
		j++;
	}
	putchar ('\n');
}
