#include "holberton.h"

/**
 * print_last_digit - Entry point
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
	int last;

	if (c < 0)
	{
		c = c * -1;
		last = c % 10;
	       _putchar (last + '0');
		return (last);
	}
	else
	{
		last = c % 10;
		_putchar(last + '0');
		 return (last);
	}
}
