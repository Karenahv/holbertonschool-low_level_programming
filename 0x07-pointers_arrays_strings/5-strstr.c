#include "holberton.h"
#include <stdio.h>

/**
 *_strstr - write a function that locates a substring
 *@haystack: the string
 *@needle: the substring
 *
 *Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	unsigned int j;
	unsigned int ls;
	unsigned int la;
	unsigned int suma;
	char *pos;

	suma = 0;
	pos = NULL;
	for (ls = 0; haystack[ls] != '\0'; ls++)
	{
	}
	for (la = 0; needle[la] != '\0'; la++)
	{
	}
	for (i = 0; i < ls; i++)
	{
		for (j = 0; j < la; j++)
		{
			while (haystack[i] == needle[j] && haystack[i + 1] == needle[j + 1])
			{
				suma++;
				if (pos == NULL)
					pos = &(haystack[i]);
				if (&(haystack[i]) < pos)
					pos = &(haystack[i]);
				i++;
				j++;
			}
		}
	}
	if (suma == la)
		return (pos);
	else
		return ('\0');
}
