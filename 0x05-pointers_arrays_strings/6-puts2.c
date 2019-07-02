#include "holberton.h"

/**
 *puts2 - Entry point
 *@str: pointer the string we want to change
 *Return: no return
 */
void puts2(char *str)
{
	int i;
	int j;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}

	j = 0;
	while (j < i)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}

		j++;
	}
	_putchar ('\n');
}
