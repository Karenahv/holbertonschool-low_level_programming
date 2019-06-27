#include "holberton.h"

/**
 * _isupper - Entry point
 *@c: charater to check
 * Return: if is lower or upper return 1 else 0
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
