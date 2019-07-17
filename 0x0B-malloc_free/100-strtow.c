#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - concatenates all the arguments of your program
 *@str: string
 *@av: arguments
 * Return: a pointer to a new string
 */
char **strtow(char *str)
{
	int i;
	char **p = NULL;
	int k;
	int ext;
	int w;
	char *x;
	int j;
	int count;
	int m;

	ext = 0;
	w = 0;
	j = 0;
	k = 0;
	i = 0;
	if (*str == '\0' || str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
			ext++;
		if (str[i] == ' ' && str[i + 1] != ' ')
			w++;
	}

	p = (char **)malloc(w - 1 * sizeof(char *));
	if (p == NULL)
		return (NULL);
	for (; i < ext; i++)
	{
		if (str[i] != ' ')
		{
		       for (count = 0; str[i] != ' '; i++)
				count++;
			*(p + j) = (char *)malloc(count + 1 * sizeof(char));
			if (*(p + j) == NULL)
			{
				for(i = 0; i < count + 1; i++)
				{
					x = p[i];
					free(x);
				}
				free(p);
				return NULL;
			} else
			{
				for (; k < ext; k++)
				{
					if (str[i] != ' ')
					{
						for (m = 0; m < count; m++)
							p[w][m] = str[k];
					}
					break;
				}
			}
			j++;
		}
		w++;
	}
      	return (p);
}
