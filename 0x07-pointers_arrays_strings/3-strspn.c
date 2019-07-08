#include "holberton.h"
#include <stdio.h>

/**
 *_strspn - gets the length of a prefix substring
 *@s: the first string
 *@accept: the second string
 *
 *Return: an integer that is the lenght of a prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int ls;
	unsigned int la;
	unsigned int n;

	n = 0;
	for (ls = 0; s[ls] != '\0'; ls++)
	{
	}
	for (la = 0; accept[la] != '\0'; la++)
	{
	}
	for (i = 0; i < ls; i++)
	{
		for (j = 0, n = 0; j < la; j++)
		{
			if (s[i] == accept[j])
				n++;
		}
		if (n == 0)
			return (i);
	}
	return (i);
}
