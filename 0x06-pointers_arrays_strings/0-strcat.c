#include "holberton.h"

/**
 *_strcat - concatenates two strings
 *@dest: pointer for the first string we want to change
 *@src: pointer  for the second string
 *
 *Return: the new string
 */
char *_strcat(char *dest, char *src)
{
	int longdest;
	int j;

	for (longdest = 0; dest[longdest] != '\0'; longdest++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[longdest] = src[j];
		longdest++;
	}
	return (dest);
}
