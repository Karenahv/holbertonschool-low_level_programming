#include "holberton.h"

/**
 *_strcmp - compare two strings
 *@s1: pointer for the first string we want to compare
 *@s2: pointer for the second string we want to compare
 *
 *Return: and integer
 */
int _strcmp(char *s1, char *s2)
{
	int j;
	int entero;

	entero = 0;
	for (j = 0; s1[j] != '\0'; j++)
	{
		if (s1[j] - s2[j] != 0)
		{
			entero = s1[j] - s2[j];
			break;
		}
	}
	if (entero == 0 && s1[j] == '\0')
		entero = s1[j] - s2[j];
	return (entero);
}
