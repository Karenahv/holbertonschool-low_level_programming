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
	char *add = NULL;

	for (ls = 0; s[ls] != '\0'; ls++)
	{
	}
	for (la = 0; accept[la] != '\0'; la++)
	{
	}
	for (i = 0; i < la - 1; i++)
	{
		for (j = 0; j < ls - 1; j++)
		{
			if (s[j] == accept[i])
			{
				if (add == NULL)
					add = &(s[j]);
				if (&(s[j]) < add)
					add = &(s[j]);
			}
		}
	}
	return (add);
}
