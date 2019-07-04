#include "holberton.h"

/**
 *leet - String to Uppercase
 *@p: pointer the string we want to capitalize
 *Return: string
 */
char *leet(char *p)
{
	int j;
	int i;
	char a1[] = {'a', 'A', 'E', 'e', 'o', 'O', 't', 'T', 'L', 'l'};
	char a2[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (j = 0; p[j] != '\0'; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			if (p[j] == a1[i])
				p[j] = a2[i];
		}
	}
	return (p);
}
