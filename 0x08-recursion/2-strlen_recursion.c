#include "holberton.h"

/**
 *_strlen_recursion - calculate the length of a string
 *@s: string
 *
 *Return: an integer
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
