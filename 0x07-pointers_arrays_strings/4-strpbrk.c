#include "holberton.h"
#include <stdio.h>

/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: the string
 *@accept: characters to find
 *
 *Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int ls;
	unsigned int la;

	for (ls = 0; s[ls] != '\0'; ls++)
	{
	}
	for (la = 0; accept[la] != '\0'; la++)
	{
	}
	for (i = 0; i < ls - 1; i++)
	{
		for (j = 0; j < la - 1; j++)
		{
			if (s[i] == accept[j])
				return (&(s[i]));
		}
	}
	if (i < ls)
		return (&(s[i]));
	else
		return ('\0');
}
