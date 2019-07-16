#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Entry point
 *@width: rows of matrix
 *@height: columns of string
 * Return: a pointer to a 2 dimensional array of integers or null
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i;
	int j;

	matrix = (int **)malloc(height * sizeof(int *));


	if (matrix == NULL || width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		*(matrix + i) = (int *)malloc(width * sizeof(int));
		for (j = 0; j < height; j++)
		{
			matrix[i][j] = 0;
		}
	}
	return (matrix);
}
