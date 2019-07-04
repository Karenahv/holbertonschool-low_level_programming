#include "holberton.h"

/**
 *_strncpy - concatenates two strings
 *@dest: pointer for the first string we want to change
 *@src: pointer  for the second string
 *@n: number of bytes
 *
 *Return: the new string dest with n bytes new
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for ( ; j < n; j++)
		dest[j] = '\0';
	return (dest);
}
