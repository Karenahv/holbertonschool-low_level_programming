#include "holberton.h"
#include <stdio.h>
#include <stddef.h>

/**
 *_strstr - write a function that locates a substring
 *@haystack: the string
 *@needle: the substring
 *
 *Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *pn;
	char *ph;

	ph = needle;
	for (; *haystack != 0;  haystack++)
	{
		for (pn = needle, ph = haystack; *pn == *ph && *pn; pn++, ph++)
			;
		if (*pn == '\0')
			return (haystack);
	}
		return (NULL);
}
