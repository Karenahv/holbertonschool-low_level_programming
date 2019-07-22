#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog structure
 *@d:dog struct
 * Return: no return
 */
void free_dog(dog_t *d)
{

	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
