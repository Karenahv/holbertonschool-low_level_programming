#include "holberton.h"

/**
 * _isalpha - Entry point
 *@c: charater to check
 * Return: if is lower or upper return 1 else 0
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
