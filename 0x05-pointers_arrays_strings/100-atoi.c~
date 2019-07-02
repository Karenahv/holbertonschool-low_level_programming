#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_atoi - Entry point
 *@s: pointer to the string
 *Return: no return
 */
int _atoi(char *s)
{
	int i;
	int j;
	int negativos;
	int positivos;
	int entero;
	int auxiliar;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	i++;
	j = 0;
	auxiliar = 10;
	entero = 0;
	negativos = 0;
	positivos = 0;
	while (j < i)
	{
		if (s[j] == '-')
		{
			negativos = negativos + 1;
		}
		if (s[j] == '+')
			positivos = positivos + 1;
		if (s[j] >= '0' && s[j] <= '9')
		{
			entero = (s[j] - '0') + entero;
			entero = auxiliar * entero;
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
		}
		j++;
	}
	if (negativos % 2 != 0)
		entero = entero * -1;
	return (entero / 10);
}
