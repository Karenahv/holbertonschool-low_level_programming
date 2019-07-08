#include "holberton.h"
#include <stdio.h>

/**
 *set_string - sets the value of a pointer to a char
 *@s:pointer to pointer
 *@to: char
 *Return: no return
 */
void set_string(char **s, char *to)
{
	*s = to;
}
