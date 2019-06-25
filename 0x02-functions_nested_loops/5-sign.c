#include "holberton.h"

/**
 * print_sign - Entry point
 *@c: chararter to check
 * Return: if char greater than 0, return 1, equal to 0 return 0, else -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
