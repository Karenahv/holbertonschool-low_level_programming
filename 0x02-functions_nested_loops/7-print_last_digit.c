#include "holberton.h"

/**
 * print_last_digit - Entry point
 *@c: number to check
 * Return: last digit of a number
 */
int print_last_digit(int c)
{
	int last;

	if (c <= 0)
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
