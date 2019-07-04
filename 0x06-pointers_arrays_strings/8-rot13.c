#include "holberton.h"

/**
 *rot13 - String to rot13
 *@p: pointer the string we want to capitalize
 *Return: string
 */
char *rot13(char *p)
{
	int j;
	int i;
	char a1[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char a2[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (j = 0; p[j] != '\0'; j++)
	{
		for (i = 0; a1[i] != '\0'; i++)
		{
			if (p[j] == a1[i])
			{
				p[j] = a2[i];
				break;
			}
		}
	}
	return (p);
}
