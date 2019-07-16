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
	int k;
	int l;

	matrix = (int **)malloc(width * sizeof(int *));
	if (matrix == NULL || width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		*(matrix + i) = (int *)malloc(height * sizeof(int));
		if (*(matrix + i) == NULL)
		{
			for (; k < i; k++)
				free(*(matrix + k));
			free(matrix);
			return (NULL);
		}
	}
	for (l = 0; l < width; l++)
	{
		if (*(matrix + i) != NULL)
		{
			for (j = 0; j < height; j++)
			{
				matrix[l][j] = 0;
			}
		}
	}
	return (matrix);
}
