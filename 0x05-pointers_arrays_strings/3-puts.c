#include "holberton.h"

/**
 * _puts - Entry point
 * @*str: pointer the sstring we want to print
 *
 * Return: 0
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
