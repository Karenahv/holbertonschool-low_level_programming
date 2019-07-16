#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Entry point
 *@str: string we need to duplicate
 * Return: a pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	char *strnew = NULL;
	unsigned int i;
	int n;

	for (n = 0; str[n] != '\0'; n++)
		;
	strnew = (char *)malloc(n * sizeof(char));
	if (str != '\0')
	{
		for (i = 0; str[i] != '\0'; i++)
			strnew[i] = str[i];
	} else if (strnew == '\0' || str == '\0')
	{
		return NULL;
	}
	return (strnew);
}
