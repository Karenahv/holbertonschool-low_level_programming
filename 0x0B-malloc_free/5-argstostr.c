#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 *@ac: number of arguments
 *@av: arguments
 * Return: a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	char *p = NULL;
	int k;
	int ncount;
	int ext;

	k = 0;
	ext = 0;
	ncount = 1;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[j] != '\0' && ncount != ac; j++)
		{
			ext++;
			if (av[i][j] == '\0')
			{
				ncount++;
				ext--;
			}
		}
	}

	p = (char *)malloc(ext * sizeof(char));
	if (p == NULL)
		return (NULL);
	ncount = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[j] != '\0' && ncount != ac; j++)
		{
			p[k] = av[i][j];
			k++;
			if (av[i][j] == '\0')
			{
				ncount++;
				p[k] = '\n';
			}
		}
	}
	return (p);
}
