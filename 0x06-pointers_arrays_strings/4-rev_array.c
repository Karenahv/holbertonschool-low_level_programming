#include "holberton.h"
#include <stdio.h>

/**
 *reverse_array - Reverse an Array
 *@a: pointer the string we want to reverse
 *@n: length of an array
 *Return: no return
 */
void reverse_array(int *a, int n)
{
	int j;
	int i;
	int gua[1000];


	j = 0;
	while (j < n)
	{

		gua[j] = a[j];
		j++;
	}

	i = 0;
	while (i < n)
	{
		a[i] = gua[j - 1];
		j--;
		i++;
	}
}
