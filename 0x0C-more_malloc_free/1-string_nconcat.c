#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Entry point
 *@s1: string 1
 *@s2: string 2
 *@n: number of bytes
 * Return: pointer should point to a newly allocated space in memory or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strnew = NULL;
	unsigned int i;
	unsigned int n1;
	unsigned int n2, j;
	unsigned int count;
	unsigned int palabras;

	count = 0;
	palabras = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (n1 = 0; s1[n1] != '\0'; n1++)
		;
	for (n2 = 0; s2[n2] != '\0'; n2++)
		;
	if (n >= n2)
	{
		palabras = n2;

	} else
	{
		for (n2 = 0; n2 < n; n2++)
			palabras++;
	}
	strnew = (char *)malloc((n1 + n2 + 1) * sizeof(char));
	if (strnew == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		strnew[i] = s1[i];
	for (j = 0; j < palabras; i++)
	{
		strnew[i] = s2[count];
		count++;
		j++;
	}
	return (strnew);
}
