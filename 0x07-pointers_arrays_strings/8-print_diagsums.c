#include "holberton.h"
#include <stdio.h>

/**
 *print_diagsums - prints the chessboard
 *@a: multidimensional array
 *@size: size of multidimensional array
 *Return: sum of the diagonal of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum;
	int sum2;

	sum = 0;
	sum2 = 0;
	for (i = 0; i < size * size;)
	{
		sum = sum + a[i];
		i = i + size + 1;
	}

	for (i = size - 1; i < (size * size) - 1;)
	{
		sum2 = sum2 + a[i];
		i = i + (size - 1);
	}
	printf("%d, %d\n", sum, sum2);
}
