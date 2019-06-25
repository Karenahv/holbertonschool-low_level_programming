#include "holberton.h"

/**
 * _islower - Entry point
 *@c: character to chech
 * Return: if character is lowercase returns 1 else 0
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
