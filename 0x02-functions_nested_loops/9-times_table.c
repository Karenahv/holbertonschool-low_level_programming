#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int ch;
	int j;

	for (ch = 0; ch <= 9; ch++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar ((j * ch) + '0');
		}
		_putchar ('\n');
	}
}
