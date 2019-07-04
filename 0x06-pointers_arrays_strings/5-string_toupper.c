#include "holberton.h"
#include <stdio.h>

/**
 *string_toupper - String to Uppercase
 *@*: pointer the string we want to reverse
 *Return: string
 */
char *string_toupper(char *p)
{
	int j;

	j = 0;
	while (p[j] != '\0')
	{
		if (p[j] >= 'a' && p[j] <= 'z')
			p[j] = p[j] - 32;
		j++;
	}

	return (p);
}
