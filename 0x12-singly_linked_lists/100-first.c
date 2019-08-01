#include <stdio.h>
#include "lists.h"

/**
 * calledFirst - print elements beforme main
 *
 * Return: no return
 */
void __attribute__((constructor)) calledFirst()
{

	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
