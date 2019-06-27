#include "holberton.h"

/**
 * _isdigit - Entry point
 *@c: charater to check
 * Return: if is digit  or not, return 1 else 0
 */
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
