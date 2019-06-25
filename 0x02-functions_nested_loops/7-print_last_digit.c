#include "holberton.h"

/**
 * print_last_digit - Entry point
 *@c: number to check
 * Return: last digit of a number
 */
int print_last_digit(int c)
{

	c = c % 10;
	if (c <= 0)
		c = c * -1;
	_putchar ('0' + c);
	return (c);
}
