#include "holberton.h"

/**
 *rev_string - Entry point
 *@s: pointer the string we want to change
 *Return: no return
 */
void rev_string(char *s)
{
	int i;
	int j;
	char gua[1000];

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	j = 0;
	while (*(s + j) != '\0')
	{

		gua[j] = *(s + j);
		j++;
	}

	j = 0;
	while (i >= 0)
	{
		s[j] = gua[i - 1];
		i--;
		j++;
	}
}
