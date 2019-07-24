#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Print a name
 *@name:name
 *@f:ponter to function
 *
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		f(name);
}
