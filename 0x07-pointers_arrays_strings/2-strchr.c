#include "holberton.h"
#include <stddef.h>

/**
 *_strchr - locates a character in a string
 *@s: the string
 *@c: character to find
 *
 *Return: s
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (; ; i++)
	{
		if (s[i] == c)
			return (&(s[i]));
		if (!s[i])
			return (NULL);

	}
}
