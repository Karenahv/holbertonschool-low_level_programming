#include "holberton.h"

/**
 * _strlen - Entry point
 *@s: pointer the string we want to now length
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
