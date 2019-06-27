#include "holberton.h"

/**
 * print_square - Entry point
 * @size: size of square
 * Return: no return
 */
void print_square(int size)
{
	int i;
	char k;
	int j;

	k = '#';
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
		if (size <= 0)
		{
			_putchar('\n');
		}
}
