#include "holberton.h"

/**
 *_memset - fills memory with a constant byte
 *@s: pointer to variable s
 *@b: constant byte
 *@n: n bytes we want to reeplace in variable c
 *
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

		for (i = 0; i < n; i++)
		{
			s[i] = b;
		}
	return (s);
}
