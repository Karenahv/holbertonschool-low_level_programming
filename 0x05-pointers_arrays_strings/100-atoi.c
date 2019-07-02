#include "holberton.h"

/**
 *_atoi - Entry point
 *@s: pointer to the string
 *Return: no return
 */
int _atoi(char *s)
{
	int i, j;
	int negativos;
	unsigned int entero;
	int auxiliar;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	j = 0;
	auxiliar = 10;
	entero = 0;
	negativos = 0;
	while (j < i)
	{
		if (s[j] == '-')
			negativos = negativos + 1;
		if (s[j] >= '0' && s[j] <= '9')
		{
			if (s[j + 1] >= '0' && s[j + 1] <= '9')
			{
				entero = (s[j] - '0') + entero;
				entero = auxiliar * entero;
			}
			else
			{
				entero = (s[j] - '0') + entero;
			}
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
		}
		j++;
	}
	if (negativos % 2 != 0)
		return ((entero) * -1);
		else
			return (entero);
}
