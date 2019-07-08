#include "holberton.h"

/**
 *_memcpy - copies memory area
 *@dest: memory area dest
 *@src: memory area src
 *@n: n bytes we want to change in memory dest
 *
 *Return:  a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
