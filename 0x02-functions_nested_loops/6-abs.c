#include "holberton.h"

/**
 * _abs - Entry point
 *@c: char to check
 * Return: absolute value of a char
 */
int _abs(int c)
{
	if (c < 0)
		return (c * -1);
	else
		return (c);
}
