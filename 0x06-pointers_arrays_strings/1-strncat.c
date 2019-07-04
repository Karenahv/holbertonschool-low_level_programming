#include "holberton.h"

/**
 *_strncat - concatenates two strings
 *@dest: pointer for the first string we want to change
 *@src: pointer  for the second string
 *@n: number of bytes
 *
 *Return: the new string with n bytes
 */
char *_strncat(char *dest, char *src, int n)
{
	int longdest;
	int j;

	for (longdest = 0; dest[longdest] != '\0'; longdest++)
	{
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[longdest] = src[j];
		longdest++;
	}
	dest[longdest] = '\0';
	return (dest);
}
