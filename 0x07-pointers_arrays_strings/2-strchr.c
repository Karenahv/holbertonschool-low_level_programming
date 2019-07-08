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
	unsigned int ls;

	for (ls = 0; s[ls] != '\0'; ls++)
	{
	}
	for (i = 0; i < ls; i++)
	{
		if (s[i] == c)
			break;
	}
	if (i < ls)
		return (&(s[i]));
	else
		return NULL;
}
