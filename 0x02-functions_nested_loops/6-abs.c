#include"holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _abs(int c)
{
	if (c < 0)
		return (c * -1);
	else
		return (c);
}
