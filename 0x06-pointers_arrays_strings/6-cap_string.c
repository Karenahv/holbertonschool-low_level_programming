#include "holberton.h"

/**
 *cap_string - String to Uppercase
 *@p: pointer the string we want to capitalize
 *Return: string
 */
char *cap_string(char *p)
{
	int j;

	j = 0;
	while (p[j] != '\0')
	{
		if (p[j] == ' ' || p[j] == ';' || p[j] == '\n' || p[j] == '\t'
		    || p[j] == ',' || p[j] == '.' || p[j] == '!' || p[j] == '?'
		    || p[j] == '"' || p[j] == '(' || p[j] == ')' ||
		    p[j] == '{' || p[j] == '}')
			if (p[j + 1] >= 'a' && p[j + 1] <= 'z')
			p[j + 1] = p[j + 1] - 32;
		j++;
	}
	if (p[0] >= 'a' && p[0] <= 'z')
		p[0] = p[0] - 32;

	return (p);
}
